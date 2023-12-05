#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    string x;
    cin >> x;
    string y = x + "$";
    vector <string> newy;
    newy.push_back(y);
    for (int i = 0; i < y.length(); i++) {
        y = y.substr(1)+y.substr(0,1);
        newy.push_back(y);
    }
    sort(newy.begin(),newy.begin()+newy.size()-1);
    vector <char> last;
    for (int i = 0; i < newy.size(); i++) {
        last.push_back(newy[i][newy[i].length() - 1]);
    }
    for (int i = 0; i < last.size()-1; i++) {
        cout << last[i];
    }
}