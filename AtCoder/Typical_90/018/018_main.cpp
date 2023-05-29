#include<bits/stdc++.h>
typedef long long ll;
double PI = 3.14159265358979;
 
using namespace std;
int main(){
    double T,L,X,Y,Q;
    cin >> T;
    cin >> L >> X >> Y;
    cin >> Q;
    vector<double> E(Q);
    for(int i=0; i<Q; i++){
        cin >> E[i];
    }

    for(int i=0; i<Q; i++){
        double rad = E[i] / T;
        double cx,cy,cz;
        cx = 0;
        cy = -(L/2.0)*sin(rad*2.0*PI);
        cz = (L/2.0)-(L/2.0)*cos(rad*2.0*PI);
        double d1 = sqrt((cx-X)*(cx-X) + (cy-Y)*(cy-Y));
        double d2 = cz;
        double ans = atan2(d2,d1)*180.0/PI;
        cout << setprecision(10) << ans << endl;
    }
    return 0;

}