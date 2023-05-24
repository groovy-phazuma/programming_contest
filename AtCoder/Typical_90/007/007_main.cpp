#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,q;
    cin >> n;
    vector<int> v(n+1);

    // load
    for(int i=1; i<=n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end()); //sort

    cin >> q;

    for(int i=1; i<=q; i++){
        int b;
        cin >> b;
        auto it = lower_bound(v.begin(), v.end(), b);
        int index = it - v.begin();

        int ans;
        if(index==1){
            ans = abs(b-v[index]);
        }
        else{
            ans = min(abs(b-v[index]),abs(b-v[index-1]));
        }
        cout << ans << endl;
    }
}