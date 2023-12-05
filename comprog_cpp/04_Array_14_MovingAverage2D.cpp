#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int R, C;
    cin >> R >> C;
    double n[R*C];
    for (int i = 0; i < R*C; i++) {
        cin >> n[i];
    }
    double answer[(R-2)*(C-2)];
    int c = 0;
    for (int i = 0; i < R*C; i++) {
        if ((i > C)&&((i + 1) % C != 0)&&(i % C != 0)&&(i < (R-1)*C)) {
            answer[c] = (n[i - C - 1] + n[i - C] + n[i - C + 1] + n[i - 1] + n[i] + n[i + 1] + n[i + C - 1] + n[i + C] + n[i + C + 1]) / 9;
            c++;
        }
    }
    int d = 0;
    for (int i = 0; i < (R-2)*(C-2); i++) {
        if (i/(C-2)==d) {
            cout << round(answer[i]*100)/100.0 << ' ';
        }
        else {
            cout << endl;
            cout << round(answer[i]*100)/100.0 << ' ';
            d++;
        }
    }
}