#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

static const int upper = 100000;

int main(){
    int N,W;
    cin >> N >> W;
    
    vector<int> v(N); 
    vector<int> w(N); 
    for(int i=0; i<N; i++){
        cin >> v[i] >> w[i];
    }
    vector<int> dp(W+1,0);
    for(int i=0; i<N; i++){
        for(int j=W-w[i]; j>=0; j--){
            dp[j+w[i]] = max(dp[j+w[i]],dp[j]+v[i]);
        }
    }
    cout << dp[W] << endl;
}