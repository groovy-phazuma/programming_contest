# -*- coding: utf-8 -*-
"""
Created on Sat Apr 29 14:51:45 2023

JUDGE ID : 7530277 By ICHINOF

@author: I.Azuma
"""
import sys

READ_FROM_FILE = True
# READ_FROM_FILE = False


def main():
    if READ_FROM_FILE:
        f = open('sample.txt', 'r')
    else:
        f = sys.stdin

    h, w = map(int, f.readline().split())
    grid = [tuple(map(int, f.readline().split())) for _ in range(h)]

    hist = [[0] * (w + 1) for _ in range(h)]
    for x in range(w):
        for y in range(h):
            if grid[y][x] == 1:
                hist[y][x] = 0
            else:
                hist[y][x] = hist[y - 1][x] + 1 if y > 0 else 1

    max_area = 0
    for y in range(h):
        stack = []
        for x in range(w + 1):
            rect = [hist[y][x], x]
            if not stack:
                stack.append(rect)
            elif stack[-1][0] < rect[0]:
                stack.append(rect)
            elif stack[-1][0] > rect[0]:
                pos = x
                while stack and stack[-1][0] >= rect[0]:
                    p_rect = stack.pop()
                    area = p_rect[0] * (x - p_rect[1])
                    max_area = max(max_area, area)
                    pos = p_rect[1]
                rect[1] = pos
                stack.append(rect)

    print(max_area)

    if READ_FROM_FILE:
        f.close()
    return


if __name__ == '__main__':
    main()

#%%
f = open('D:/GdriveSymbol/notebook/compe/AIZU_ONLINE/DPL_3_B/sample.txt', 'r')
h, w = map(int, f.readline().split())
grid = [tuple(map(int, f.readline().split())) for _ in range(h)]

# create histogram
hist = [[0] * (w + 1) for _ in range(h)]
for x in range(w):
    for y in range(h):
        if grid[y][x] == 1:
            hist[y][x] = 0
        else:
            # Pile up. Ignore the bottom row.
            hist[y][x] = hist[y - 1][x] + 1 if y > 0 else 1

max_area = 0
for y in range(h):
    stack = []
    for x in range(w + 1):
        rect = [hist[y][x], x] # height and pos info
        if not stack:
            stack.append(rect)
        elif stack[-1][0] < rect[0]:
            stack.append(rect)
        elif stack[-1][0] > rect[0]:
            pos = x
            while stack and stack[-1][0] >= rect[0]:
                p_rect = stack.pop()
                area = p_rect[0] * (x - p_rect[1]) # calc rectangle
                max_area = max(max_area, area)
                pos = p_rect[1]
            rect[1] = pos # like a parallel shift
            stack.append(rect)

print(max_area)
