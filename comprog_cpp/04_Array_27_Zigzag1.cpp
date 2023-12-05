#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    int l1[N],l2[N];
    int a,b; 
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        if (i%2==0) {
            l1[i] = a;
            l2[i] = b;
        }
        else {
            l2[i] = a;
            l1[i] = b;
        }
    }
    cin.ignore();
    string z;
    cin >> z;
    int min1,max1,min2,max2;
    for (int i = 0; i < N; i++) {
        if (i==0) {
            min1 = l1[0];
        }
        else {
            min1 = min(min1,l1[i]);
        }
    }
    for (int i = 0; i < N; i++) {
        if (i==0) {
            max1 = l1[0];
        }
        else {
            max1 = max(max1,l1[i]);
        }
    }
    for (int i = 0; i < N; i++) {
        if (i==0) {
            min2 = l2[0];
        }
        else {
            min2 = min(min2,l2[i]);
        }
    }
    for (int i = 0; i < N; i++) {
        if (i==0) {
            max2 = l2[0];
        }
        else {
            max2 = max(max2,l2[i]);
        }
    }
    if (z=="Zig-Zag") {
        cout << min1 << ' ' << max2;
    }
    if (z=="Zag-Zig") {
        cout << min2 << ' ' << max1;
    }
}