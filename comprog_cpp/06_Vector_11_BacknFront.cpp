#include <iostream>
#include <vector>
using namespace std;
int main () {
    int A;
    cin >> A;
    vector <int> ans;
    int a;
    for (int i = 0; i < A; i++) {
        cin >> a;
        if (i % 2 == 0) {
            ans.push_back(a);
        }
        else {
            ans.insert(ans.begin(),a);
        }
    }
    int C;
    while (cin >> C) {
        if (C == -1) {
            break;
        }
        else {
            if (ans.size() % 2 == 0) {
                ans.push_back(C);
            }
            else {
                ans.insert(ans.begin(),C);
            }
        }
    }
    cout << '[';
    for (int i = 0; i < ans.size(); i++) {
        if (i == ans.size() - 1) {
            cout << ans[i];
            break;
        }
        cout << ans[i] << ", ";
    }
    cout << ']';
}