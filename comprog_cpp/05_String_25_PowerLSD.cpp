#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    string A, N;
    int a, n;
    while (cin >> A >> N) {
        a = stoi(A.substr(A.length()-1,1));
        if (N.length()>=3) {
            n = stoi(N.substr(N.length()-2,2));
        }
        else {
            n = stoi(N);
        }
        if ((a==0||a==1||a==5||a==6)&&n!=0) {
            a = a;
        }
        else if ((a==2||a==3||a==4||a==7||a==8||a==9)&&n!=0){
            n = n%4 + 4;
            a = (int)(pow(a,n))%10;
        }
        else {
            a = 1;
        }
        cout << ">> " << a << endl;
    }
}