#include <iostream>
#include <set>
using namespace std;
int main() {
    int K;
    cin >> K;
    int n;
    set <int> setn;
    int c = 0;
    while (cin >> n) {
        setn.insert(n);
        if (K > n && K != n + n) {
            if (setn.find(K - n) != setn.end()) {
                c++;
            }
        }
    }
    cout << c;
}