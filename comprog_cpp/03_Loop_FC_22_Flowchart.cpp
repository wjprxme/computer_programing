#include <iostream>
using namespace std;
int main() {
    int n;
    int k;
    cin >> n >> k; 
        if (n % 2 == 1) {
            int sum_a = 0;
            int sum_b = 0;
            int sum_c = 0;
            int m = 0;
            while (m < k) {
                int a, b, c;
                cin >> a >> b >> c;
                if (a == b) {
                    if (a == b && a == c && b == c) {
                        if (a + b > k) {
                            sum_a += 1;
                            sum_b += 2;
                            sum_c -= 3;
                        }
                        else {
                            sum_a -= 3;
                            sum_b -= 2;
                            sum_c += 1;
                        }
                    }
                    else {
                        sum_a += 2;
                        sum_b -= 3;
                    }
                }
                m += 1; 
            }
            cout << sum_a << ' ' << sum_b << ' ' << sum_c;
        }
        else {
            int s, t;
            cin >> s >> t;
            int x, y;
            x = s;
            y = t;
            if (s > t) {
                x = s - t;
            }
            if (s < t) {
                y = 2 * (t - s);
            }
            if (x + y > k) {
                int temp = x;
                x = y;
                y = temp;
                x = y + s*s;
            }
            cout << x << ' ' << y;
        }
    }
