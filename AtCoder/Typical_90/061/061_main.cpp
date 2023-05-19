#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int q;
    cin >> q;

    deque<int> dq;

    for(int i=1; i<=q; i++){
        int t,x;
        cin >> t >> x;
        if(t==1){
            dq.push_front(x);
        }
        else if(t==2){
            dq.push_back(x);
        }
        else if(t==3){
            cout << dq[x-1] << endl;
        }
    }
}