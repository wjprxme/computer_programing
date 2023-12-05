#include <iostream>
#include <string>
using namespace std;
int main() {
    int x,y;
    int min1,max1,min2,max2;
    int i=0;
    cin >> x;
    while ((x!=-998)&&(x!=-999)) {
        cin >> y;
        if (i==0) {
            min1=x;
            max1=y;
            min2=y;
            max2=x;
        }
        if (i%2==1) {
            min1=min(min1,y);
            max1=max(max1,x);
            min2=min(min2,x);
            max2=max(max2,y);
        }
        if (i%2==0) {
            min1=min(min1,x);
            max1=max(max1,y);
            min2=min(min2,y);
            max2=max(max2,x);
        }
        cin >> x;
        i++;
    }
    if (x==-998) {
        cout << min1 << " " << max1;
    } 
    if (x==-999) {
        cout << min2 << " " << max2;
    }
}