#include <iostream>
#include <vector>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector <int> ans;
    ans.push_back(n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n/2;
            ans.push_back(n);
        }
        else {
            n = 3 * n + 1;
            ans.push_back(n);
        }
    }
    if (ans.size() > 15) {
        int x = ans.size();
        for (int i = 0; i < x - 15; i++) {
            ans.erase(ans.begin());
        }
    }
    for (int i = 0; i < 15; i++) {
        if (ans[i] > 1) {
            cout << ans[i] << "->";
        }
        if (ans[i] == 1) {
            cout << 1;
            break;
        }
    }
}