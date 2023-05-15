#include<bits/stdc++.h>
 
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> v(n+1,vector<int>(2));
    // loading
    for(int i=1; i<=n; i++){
        cin >> v[i][0] >> v[i][1];
    }
    vector<int> accum1((n+1));
    vector<int> accum2((n+1));
    for(int i=0; i<=n; i++){
        accum1[i] = accum1[i-1]; accum2[i] = accum2[i-1]; 
        v[i][0] == 1 ? accum1[i] += v[i][1] : accum2[i] += v[i][1];
    }
    int q;
    cin >> q;
    vector<vector<int>> order(q,vector<int>(2));
    for(int i = 0;i < q;i++){
        cin >> order[i][1] >> order[i][0];
    }
    for(int i=0; i<q; i++){
        cout << accum1[order[i][0]] - accum1[order[i][1]-1] << " " << accum2[order[i][0]] - accum2[order[i][1]-1] << " ";
    }
}