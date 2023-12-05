#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    string x;
    long double a;
    cin >> x;
    if (x.length()<=3) 
        {a=stod(x); 
        cout << a;}
    if (x.length()==4) 
        {a=stod(x); a = a/1000;
        cout << round(a*10)/10.0 << "K";}
    if (x.length()==5) 
        {a=stod(x); a = a/1000;
        cout << round(a*1)/1 << "K";}
    if (x.length()==6) 
        {a=stod(x); a = a/1000;
        cout << round(a*1)/1 << "K";}
    if (x.length()==7) 
        {a=stod(x); a = a/1000000;
        cout << round(a*10)/10.0 << "M";}
    if (x.length()==8) 
        {a=stod(x); a = a/1000000;
        cout << round(a*1)/1 << "M";}
    if (x.length()==9) 
        {a=stod(x); a = a/1000000;
        cout << round(a*1)/1 << "M";}
    if (x.size()==10) 
        {a=stod(x); a = a/1000000000;
        cout << round(a*10)/10.0 << "B";}        
    if (x.size()>10) 
        {a=stod(x); a = a/1000000000;
        cout << round(a*1)/1 << "B";}
}