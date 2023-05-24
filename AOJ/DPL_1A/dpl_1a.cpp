#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

static const int upper = 100000;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> c(m+1);
    vector<int> t(n+1,upper);

    for(int i=1; i<=m; i++){
        cin >> c[i];
    }
    t[0]=0;

    for(int i=1; i<=m; i++){
        for(int j=0; j+c[i]<=n; j++){
            t[j+c[i]] = min(t[j+c[i]],t[j]+1);
        }
    }
    for(int i=1; i<=n; i++){
        cout << t[i] << " ";
    }
}