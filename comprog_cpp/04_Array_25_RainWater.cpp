#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int grey[n]; 
    int g;
    for (int i = 0; i < n; i++) {
        cin >> g;
        grey[i]=g;
    }
    int maxgrey = grey[0];
    for (int i = 0; i < n; i++) {
        maxgrey = max(maxgrey,grey[i]);
    }
    int sum = 0;
    for (int i = maxgrey; i >= 1; i--) {
        int newmaxgrey = 0;
        int c = 0;
        for (int j = 0; j < n; j++) {
            if (grey[j] >= i) {
                newmaxgrey = j;
                break;
            }
        }
        for (int k = newmaxgrey; k < n; k++) {
            if (grey[k] < i) {
                c++;
            }
            else {
                sum += c;
                c = 0;
            }
        }
    }
    cout << sum;
}