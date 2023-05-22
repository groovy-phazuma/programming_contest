#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n,m;
    cin >> n >> m;

    vector<int> v(n+1);
    for(int i=1; i<=m; i++){
        int a,b;
        cin >> a >> b;
        v[max(a,b)] += 1;
    }

    int ans=0;
    for(int i=1; i<=n; i++){
        if(v[i] == 1){
            ans += 1;
        }
    }
    cout << ans << endl;
}