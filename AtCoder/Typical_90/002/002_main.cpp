#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isvalid(string &S) {
    int score = 0;
    for (auto c: S) {
        if (c == '(') ++score;
        else if (c == ')') --score;
        if (score < 0) return false;
    }
    
    return (score == 0);
}

int main(){
    int n;
    cin >> n;

    // 全探索
    for (int bit = 0; bit < (1<<n); ++bit) { //ビット全探索 1<<kで2**k
        string S = "";
        // 最上位の桁から順に見ていく
        for (int i = n-1; i >= 0; --i) {
            if (!(bit & (1<<i))){ // ビットSにi番目のフラグが立っていない
                S += "(";             
            } 
            else{
                S += ")"; // ビットSにi番目のフラグが立っている
            } 
        }
        if (isvalid(S)) cout << S << endl;
    }
}