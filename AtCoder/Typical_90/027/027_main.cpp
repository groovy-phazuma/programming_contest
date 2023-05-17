#include<bits/stdc++.h>
 
using namespace std;
int main(){
    int n;
    cin >> n;

    // load
    string s[n+1];
    for(int i=1; i<=n; i++){
        cin >> s[i];
    }
    set<string> namelist;
    for(int i=1; i<=n; i++){
        if(namelist.count(s[i])){
            continue;
        }
        else{
            cout << i << endl;
            namelist.insert(s[i]);
        }
    }
}