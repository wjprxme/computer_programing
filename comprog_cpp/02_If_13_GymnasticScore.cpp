#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a,b,c,d,x,y,z;
    cin >> a >> b >> c >> d;
    if (a>=b&&a>=c&&a>=d) {x=a;}
    if (b>=a&&b>=c&&b>=d) {x=b;}
    if (c>=a&&c>=b&&c>=d) {x=c;}
    if (d>=a&&d>=b&&d>=c) {x=d;}
    if (a<=b&&a<=c&&a<=d) {y=a;}
    if (b<=a&&b<=c&&b<=d) {y=b;}
    if (c<=a&&c<=b&&c<=d) {y=c;}
    if (d<=a&&d<=b&&d<=c) {y=d;}
    z=(a+b+c+d-x-y)/2;
    cout << round(z*100.0)/100.0;
}    