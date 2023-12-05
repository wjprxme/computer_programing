#include <iostream>
#include <vector>
using namespace std;
vector <string> split(string line, char delimiter) {
    vector<string> word;
    line = line + delimiter;
    int c = 0;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] != delimiter) {
            c++;
        }
        else if (c > 0) {
            word.push_back(line.substr(i - c, c));
            c = 0;
        }
    }
    return word;    
}
int main() {
    string line;
    getline(cin, line);
    string delim;
    getline(cin, delim);
    for (string e : split(line, delim[0])) {
        cout << '(' << e << ')';
    }
}