#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,p,q;
    cin >> n >> p >> q;

    // load
    vector<int> data(n+1);
    for(int i=1; i<=n; i++){
        cin >> data[i];
    }

    int ans=0;
    // nが大きくないから全ての組み合わせを考慮
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            for(int k=1; k<j; k++){
                for(int l=1; l<k; l++){
                    for(int m=1; m<l; m++){
                        if(1LL *data[i]*data[j]%p*data[k]%p*data[l]%p*data[m]%p == q){ // size consideration
                            ans ++;
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
}