#include<bits/stdc++.h>
 
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;

    // loading
    vector<int> av((n+1));
    for(int i=1; i<=n; i++){
        cin >> av[i];
    }
    vector<int> bv((n+1));
    for(int i=1; i<=n; i++){
        cin >> bv[i];
    }
    // Absolute value of difference for each element
    int dif=0;
    for(int i=1; i<=n; i++){
        int abs_dif = abs(av[i]-bv[i]);
        dif += abs_dif;
    }

    // if (k - dif < 0 || (k - dif) % 2 != 0) cout << "No" << endl;
    if(dif>k){
        cout << "No" << " ";
    }
    else{
        int remain = k-dif;
        if(remain%2 == 0){
            cout << "Yes" << " ";
        }
        else{
            cout << "No" << " ";
        }
    }
}