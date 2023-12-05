#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int main(){
    vector<string> code;
    string s;
    vector<double> price;
    double d;
    while (cin >> s){
        if (s == "END") {
            break;
        }
        code.push_back(s);
        cin >> d;
        price.push_back(d);
    }
    cin.ignore();
    vector<string> list;
    string l;
    getline(cin,l);
    l += ' ';
    int c = 0;
    for (int i = 0; i < l.length(); i++) {
        if (l[i] != ' ') {
            c++;
        }
        else {
            list.push_back(l.substr(i-c,c));
            c = 0;
            continue;
        }
    }
    vector<pair<double,string> > sum;
    for (int i = 0; i < code.size(); i++) {
        sum.push_back(make_pair(0,code[i]));
        for (int j = 0; j < list.size(); j++) {
            if (code[i] == list[j]) {
                sum[i].first += price[i];
            }
        }
    }
    sort(sum.begin(),sum.end());
    int k = 0;
    for (int i = code.size() - 1; i >= 0; i--) {
        if (sum[i].first > 0) {
            cout << sum[i].second << ' ' << sum[i].first << endl;
            k++;
            if (k == 3) {
                break;
            }
        }
    }
    if (k == 0) {
        cout << "No Sales";
    }
}