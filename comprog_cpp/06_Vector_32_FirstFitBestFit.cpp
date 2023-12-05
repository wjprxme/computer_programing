#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <utility>
using namespace std;
int main() {
    string fit;
    cin >> fit;
    int in;
    vector <int> input;
    while (cin >> in) {
        input.push_back(in);
    }

    if (fit == "first") {
        vector <pair <int , multimap <int, multiset <int> > > > sumsizegroup ;
        while (input.size() > 0 ) {
            vector <int> nextinput; 
            multiset <int> group ;
            multimap <int , multiset <int> > sizegroup ;
            int sum = 0 ;
            for (int i = 0; i < input.size(); i++) {
                if (sum + input[i] > 100 ) {
                    nextinput.push_back(input[i]);
                } 
                else {
                    group.insert(input[i]);
                    sum += input[i];
                }
            }
            sizegroup.insert(make_pair(group.size(), group)) ;
            sumsizegroup.push_back(make_pair(-sum, sizegroup)) ; 
            input = nextinput;
        }

        sort(sumsizegroup.begin(), sumsizegroup.end());
        for (auto &i : sumsizegroup) {
            for (auto &j : i.second) {
                for (auto &k : j.second) {
                    cout << k << " ";
                }
                cout << endl;
            }
        }
    }
    if(fit == "best"){
        while
    }
}