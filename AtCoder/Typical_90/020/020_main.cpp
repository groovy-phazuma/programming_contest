#include<bits/stdc++.h>
typedef long long ll;
double PI = 3.14159265358979;
 
using namespace std;
int main(){
    ll a,b,c,d=1;
    cin >> a >> b >> c;
    for(int i=0; i<b; i++){
        d*=c;
    }
    if(a<d){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}