#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int n;
    vector <int> list;
    while (cin >> n) {
        list.push_back(n);
    }
    sort(list.begin(),list.begin()+list.size());
    vector <int> ans;
    ans.push_back(list[0]);
    int c = 1;
    for (int i = 0; i < list.size() - 1; i++) {
        for (int j = 0; j < list.size() - 1; j++) {
            if (list[i] != list[i + 1] && list[i + 1] != ans[j]) {
                ans.push_back(list[i + 1]);
                c++;
                break;
            }
        }
    }
    cout << c << endl;
    if (ans.size() <= 10) {
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << ' ';
        }
    }
    else {
        for (int i = 0; i < 10; i++) {
            cout << ans[i] << ' ';
        }
    }
}