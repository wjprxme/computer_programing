#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a1[n], b1[n], c1[n];
    for (int i = 0; i < n; i++) {
        cin >> a1[i] >> b1[i] >> c1[i];
    }
    int a[n], b[n], c[n];
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n; j++) {
            if (i==a1[j]) {
                a[i-1]=a1[j];
                b[i-1]=b1[j];
                c[i-1]=c1[j];
            }
        }
    }
    int m;
    cin >> m;
    int x, y;
    int sum[n];
    while (cin >> x >> y) {
        for (int i = 0; i < n; i++) {
            if (x < y) {
                if (x>b[i]&&y>=c[i]) {
                    sum[i] = abs(c[i] - y);
                }
                else if (x>=b[i]&&x<=c[i]&&y>c[i]) {
                    sum[i] = abs(c[i] - y);
                }
                else if (x>=b[i]&&x<=c[i]&&y<=c[i]) {
                    sum[i] = 0;
                }
                else {
                    sum[i] = abs(x - c[i]) + abs(x - y);
                }
            }
            if (x > y) {
                if (x<=b[i]&&y<c[i]) {
                    sum[i] = abs(c[i] - y);
                }
                else if (x<=b[i]&&x>=c[i]&&y<c[i]) {
                    sum[i] = abs(c[i] - y);
                }
                else if (x<=b[i]&&x>=c[i]&&y>=c[i]) {
                    sum[i] = 0;
                }
                else {
                    sum[i] = abs(x - c[i]) + abs(x - y);
                }
            }
        }
        int minsum = sum[0];
        for (int i = 0; i < n; i++) {
            minsum = min(minsum,sum[i]);
        }
        for (int i = 0; i < n; i++) {
            if (minsum == sum[i]) {
                cout << ">> " << a[i] << endl;
                break;
            }
        }
    }
}