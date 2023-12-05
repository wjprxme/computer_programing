#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string x,y;
    string A[n],B[n/2],C[n/2];
    for (int i = 0; i < n; i++) {
        cin >> x;
        A[i] = x;
    }
    cin.ignore();
    getline(cin,y);
    for (int i = 0; i < y.length(); i++) {
        if (y[i]=='C') {
            for (int j = 0; j < n/2; j++) {
                swap(A[j],A[j+n/2]);
            }
        }
        if (y[i]=='S') {
            for (int j = 0; j < n/2; j++) {
                B[j] = A[j];
            }
            for (int j = 0; j < n/2; j++) {
                C[j] = A[j+n/2];
            }  
            int l =0,k=0;
            for (int j = 0; j < n; j++) {
                if (j%2==0) {
                    A[j]=B[l];
                    l++;
                }
                else {
                    A[j]=C[k];
                    k++;
                }
                //A[j*2]=B[j];
                //A[j*2+1]=C[j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << A[i] << ' ';
    }
}