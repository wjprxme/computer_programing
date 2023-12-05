#include <iostream>
using namespace std;
int main(){
    int d,m,y,m1;
    cin >> d >> m >> y;
    y = y-543;
    m1=28; 
    if (y%400==0||(y%4==0&&y%100!=0)){m1=29;} 
    if (m==1) cout << d;
    if (m==2) cout << d+31;
    if (m==3) cout << d+31+m1;
    if (m==4) cout << d+31+m1+31;
    if (m==5) cout << d+31+m1+31+30;
    if (m==6) cout << d+31+m1+31+30+31;
    if (m==7) cout << d+31+m1+31+30+31+30;
    if (m==8) cout << d+31+m1+31+30+31+30+31;
    if (m==9) cout << d+31+m1+31+30+31+30+31+31;
    if (m==10) cout << d+31+m1+31+30+31+30+31+31+30;
    if (m==11) cout << d+31+m1+31+30+31+30+31+31+30+31;
    if (m==12) cout << d+31+m1+31+30+31+30+31+31+30+31+30;
}