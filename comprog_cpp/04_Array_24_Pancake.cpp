#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n; 
    cin >> n;
    int unsorted[n],sorted[n],input[n];
    int posmax;

    for (int i = 0; i < n; i++) {
        cin >> input[i];
        unsorted[i] = input[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        int maxsorted = 0;
        for (int j = 0; j < n;j++){
            maxsorted = max(maxsorted,input[j]);
        }
        sorted[i] = maxsorted;
        for (int j = 0; j < n;j++){
            if (maxsorted == input[j]) {
                input[j] = 0;
            }
        }
    }
    
    for (int i = 0 ; i < n; i++){
        cout << unsorted[i] << ' ';
    }
    cout << endl;

    for (int i = n - 1; i >= 0;i--) {
        for (int j = 0; j < n;j++){
            if (unsorted[j] == sorted[i]) {
                posmax = j;
            }
        }
        if (posmax == 0) {
            int b = i;
            for (int k = 0; k <= i / 2; k++){
                swap(unsorted[k], unsorted[b]);
                b--;
            }
            for (int k = 0; k < n; k++){
                cout << unsorted[k] << ' ';
            }
            cout << endl;
        }
        else if (posmax == i) {
            continue;
        }
        else if (posmax > 0 && posmax < n - 1) {
            int a = posmax, b = i;
            for (int k = 0;k <= posmax / 2; k++) {
                swap(unsorted[k], unsorted[a]);
                a--;
            }
            for (int k = 0; k < n; k++) {
                cout << unsorted[k] << ' ';
            }
            cout << endl;
            for (int k = 0; k <= i / 2; k++) {
                swap(unsorted[k], unsorted[b]);
                b--;
            }
            for (int k = 0; k < n; k++) {
                cout << unsorted[k] << ' ';
            }
            cout << endl;
        }
        int c = 0;
        for (int j = 0; j < n; j++){
            if (unsorted[j]== sorted[j]) {
                c++;
            }
        }
        if (c == n) {
            break;
        }
    }
}