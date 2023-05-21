#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll octal2n(string n){
    ll ans=0, x=1;
    for(int i=n.size()-1; i>=0; i--){
        ans += (n[i]-'0')*x; // charをintに変換（ASCIIコードの対応を反映）
        x *= 8;
    }
    return ans;
}

string n2nonary(ll n){
    string ans = "";
    while(n != 0){
        ans =  (char)(n % 9 +'0') + ans; // intをcharに変換（ASCIIコードの対応を反映）
        n /= 9;
    }
    for(int i = 0; i < ans.size(); i++){
        if(ans[i] == '8'){
            ans[i] = '5';
        }
    }
    return ans;
}

void solve(){
    string n;
    int k;
    ll num;

    cin >> n >> k;
    if(n == "0"){
        cout << 0 << endl;
        return;
    }
    while(k-- > 0){
        num = octal2n(n);
        n = n2nonary(num);
    }
    cout << n << endl;
    return;
}


int main(){
    solve();
}