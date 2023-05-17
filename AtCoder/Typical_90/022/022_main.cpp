#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

using namespace std;
int main(){
    ll a,b,c;
    cin >> a >> b >> c;

    ll size;
    size = gcd(gcd(a,b),c);
    size = gcd(a,b);

    ll n;
    n = (a+b+c) / size - 3LL;

    cout << n << endl;
}