#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double n;
    cin >> n;
    double sum=0,a=0;
    if (n==-1) {
        cout << "No Data";
    }
    else {
        while (n!=-1) {
            sum = sum + n;
            cin >> n;
            a++;
        }
        double avg=sum/a;
        cout << round(avg*100)/100;
    }
}