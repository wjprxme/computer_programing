#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    int k = 2;
    while (k<=N) {
        while (N%k==0) {
            cout << k;
            N = N/k;
            if (N>1) {
                cout << '*';
            }
        }
        k++;
    }
}