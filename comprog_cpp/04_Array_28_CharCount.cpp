#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int arr[26] = {0};
    for (auto c:s) {
        if (c>='a'&&c<='z') {
            arr[c-'a']++;
        }
        else if (c>='A'&&c<='Z') {
            arr[c-'A']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (arr[i])
        cout << char (i+'a') << " -> " << arr[i] << endl;
    }

}