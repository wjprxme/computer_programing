#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int main(){
    string line;
    getline (cin, line);
    line = line + "x";
    vector <int> list;
    for (int i = 0; i < line.length(); i++ ) {
        if (line[i] != ' ') {
            list.push_back(line[i]);
        }
    }
    int c = 1, cmax = 0;
    int startindex, stopindex;
    char num;
    vector <pair<char,int> > number;
    vector <pair<int,int> > index;
    for (int i = 0; i < list.size(); i++ ) {
        for (int j = i + 1; j < list.size(); j++) {
            if (list[i] == list[j]) {
                c++;
            }
            else {
                num = list[i];
                startindex = i;
                stopindex = j;
                if (c > cmax) {
                    cmax = c;
                    index.clear();
                    index.push_back(make_pair(startindex, stopindex));
                    number.clear();
                    number.push_back(make_pair(num,startindex));
                }
                else if (c == cmax) {
                    index.push_back(make_pair(startindex, stopindex));
                    number.push_back(make_pair(num,startindex));
                }
                i += c;
                c = 1;
            }
        }
    }
    sort(number.begin(),number.end());
    for (int i = 0; i < index.size(); i++) {
        for (int j = i; j < index.size(); j++) {
            if (number[i].second == index[j].first) {
                swap (index[i], index[j]);
            }
        }
    }
    for (int i = 0; i < index.size(); i++) {
        cout << number[i].first << " --> x[ " << index[i].first << " : " << index[i].second << " ]" << endl;
    }
}