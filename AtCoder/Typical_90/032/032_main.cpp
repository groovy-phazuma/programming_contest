#include<bits/stdc++.h>
typedef long long ll;
double PI = 3.14159265358979;
 
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<vector<int>> a(N,vector<int>(N));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> a[i][j];
        }
    }
    int M,x,y;
    cin >> M;
    vector<vector<bool>> bads(N,vector<bool>(N,false));
    for(int i=0; i<M; i++){
        cin >> x >> y;
        x--;y--;
        bads[x][y] = true;
        bads[y][x] = true;
    }
    vector<int> v(N);
    iota(v.begin(),v.end(),0);
    int ans = 1e9;
    while(true){
        int candi=0;
        for(int i=0; i<N; i++){
            candi += a[v[i]][i];
            if(i>0 && bads[v[i-1]][v[i]]){
                candi = 1e9;
                break;
            }
        }
        ans = min(ans,candi);
        if (!next_permutation(v.begin(), v.end())) break;
    }
    if(ans == 1e9){
        cout << -1 << endl;
    }
    else{
        cout << ans << endl;
    }
}