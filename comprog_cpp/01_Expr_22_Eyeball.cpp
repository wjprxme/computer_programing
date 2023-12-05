#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int xe,ye,re,rp,xm,ym;
    cin >> xe;
    cin >> ye;
    cin >> re;
    cin >> rp;
    cin >> xm;
    cin >> ym;
    double A,B,C,a,b,c,xp,yp;
    A = xm-xe;
    B = ym-ye;
    C = sqrt(pow(A,2)+pow(B,2));
    c = re-rp;
    a = A*c/C;
    b = B*c/C; 
    xp = xe+a;
    yp = xe+b;
    cout << round(xp) << " " << round(yp);
}