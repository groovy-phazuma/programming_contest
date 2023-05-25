#include<bits/stdc++.h>
typedef long long ll;
 
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    // loading
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end()); //sort
    sort(b.begin(), b.end()); //sort

    ll ans=0;
    for(int i=0; i<n; i++){
        ans += abs(a[i]-b[i]);
    }
    cout << ans << endl;
}