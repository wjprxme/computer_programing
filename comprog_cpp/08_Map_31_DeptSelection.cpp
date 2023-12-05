#include <iostream>
#include <map>
#include <vector>
#include <utility>
using namespace std;

int main() {
    int n;
    cin >> n;
    string field;
    int number;
    map<string, int> fieldnumber;
    for (int i = 0; i < n; i++) {
        cin >> field >> number;
        fieldnumber[field] = number;
    }

    int m;
    cin >> m;
    string id, rank1, rank2, rank3, rank4;
    double score;
    map <double, pair <string, vector<string> > > scoreidrank;
    for (int i = 0; i < m; i++) {
        cin >> id >> score >> rank1 >> rank2 >> rank3 >> rank4;
        vector<string> rank;
        rank.push_back(rank1);
        rank.push_back(rank2);
        rank.push_back(rank3);
        rank.push_back(rank4);
        scoreidrank[-score] = make_pair(id, rank);
    }

    map<string, string> idfield;
    for (auto &itr : scoreidrank) {
        for (auto &i : itr.second.second) {
            if (fieldnumber[i] > 0) {
                fieldnumber[i]--;
                idfield[itr.second.first] = i;
                break;
            }
        }
    }

    for (auto & itr : idfield) {
        cout << itr.first << ' ' << itr.second << endl;
    }
}
