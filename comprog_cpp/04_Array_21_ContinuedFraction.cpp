#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    double A[n],B[n];
    double x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        A[i] = x;
    }
    for (int i = 0; i < n; i++) {
        B[i] = A[i];
        for (int j = i; j > 0; j--) {
            B[j - 1] = A[j - 1] + (1/B[j]);
        }
        if (i==0) {
            cout << A[i] << endl;
        }
        else {
            cout << setprecision(10) << B[0] << endl;
        }
    }
}