#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    int x;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> x;
        arr[i] = x;
    }
    int c = 0;
    for (int i = 1; i < N - 1; i++) {
        if (arr[i]>arr[i-1]&&arr[i]>arr[i+1]) {
            c++;
        }
    }
    cout << c;
}