#include <iostream>
#include <string>
#include <cmath>
using namespace std;
long gcd(long a, long b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}
int main(){
    string b,c,x;
    int a,b1,b2,c1,c2,x1,x2,u,u1,l,g;
    cin >> a >> b >> c;
    x=b+c;
    x1=stoi(x);
    b1=stoi(b);
    c1=stoi(c);
    u=x1-b1;
    x2=x.length();
    b2=b.length();
    c2=c.length();
    l=pow(10,x2)-pow(10,b2);
    u1=u+a*l;
    g=gcd(u,l);
    cout << u1/g << " / " << l/g;
}