#include <iostream>
#include <string>
using namespace std;
int main() {
    int M;
    cin >> M;
    int n;
    int N[M*M];
    for (int i = 0; i < M*M; i++) {
        cin >> n;
        N[i] = n;
    }
    int inversion = 0;
    int pos0;
    for (int i = 0; i < M*M; i++) {
        if (N[i]==0) {
            pos0=i;
        }
        for (int j = i + 1; j < M*M; j++) {
            if (N[i]!=0&&N[j]!=0&&N[i]>N[j]) {
                inversion++;
            }
        }
    }
    if (M%2==1&&inversion%2==0) {
        cout << "YES";
    }
    else if (M%2==0&&inversion%2==1&&(pos0/M)%2==0) {
        cout << "YES";
    }
    else if (M%2==0&&inversion%2==0&&(pos0/M)%2==1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}