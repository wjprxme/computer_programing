#include <iostream>
#include <set>
using namespace std;
int main() {
    set <int> s;
    int x;
    int cnt = 0;
    while (cin >> x){
        cnt++;
        if (s.count(x)){
            cout << cnt;
            return 0;
        }
        s.insert(x);
    }
    cout << "-1";
}