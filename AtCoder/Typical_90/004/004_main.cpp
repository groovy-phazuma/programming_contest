#include<bits/stdc++.h>

using namespace std;
int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<int>> v(h,vector<int>(w));
    // loading
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> v.at(i).at(j);
        }
    }
    // horizontal
    vector<int> hvec(h);
    for(int i=0; i<h; i++){
        int hs = 0;
        for(int j=0; j<w; j++){
            hs += v.at(i).at(j);
        }
        hvec[i] = hs;
    }
    // vertical
    vector<int> vvec(w);
    for(int i=0; i<w; i++){
        int vs = 0;
        for(int j=0; j<h; j++){
            vs += v.at(j).at(i);
        }
        vvec[i] = vs;
    }
    // horizontal + vertical - overlap
    cout << endl;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cout << hvec[i] + vvec[j] - v.at(i).at(j) << " ";
        }
        cout << endl;
    }
}