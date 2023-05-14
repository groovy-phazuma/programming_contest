#include<bits/stdc++.h>

using namespace std;
int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<int>> v(h, vector<int>(w));
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> v.at(i).at(j);
        }
    }
    vector<int> t(h), y(w);
    for(int i = 0; i < h; i++){
        int c = 0;
        for(int j = 0; j < w; j++){
            c += v.at(i).at(j);
        }
        t[i] = c;
    }
    for(int i = 0; i < w; i++){
        int c = 0;
        for(int j = 0; j < h; j++){
            c += v.at(j).at(i);
        }
        y[i] = c;
    }
    cout << endl;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << t[i] + y[j] - v.at(i).at(j) << " ";
        }
        cout << endl;
    }
}