#include<bits/stdc++.h>
typedef long long ll;
 
using namespace std;
int main(){
    int n,a,b,c;
    cin >> n;
    cin >> a >> b >> c;

    int p = 9999;
    int ans = 9999;
    for(int i=0; i<p+1; i++){
        for(int j=0; j<p+1; j++){
            ll tmp = (a*i) + (b*j);
            ll rem = n-tmp;
            if (rem % c != 0 || rem < 0){
                continue;
            }
            else{
                int k = rem/c;
                if(ans > i+j+k){
                    ans = i+j+k;
                }
            }
        }
    }
    cout << ans << endl;
}