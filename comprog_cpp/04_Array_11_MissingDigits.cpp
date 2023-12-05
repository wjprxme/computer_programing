#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int arr[10] = {1};
    bool status = 1;
    int c = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i]>='0'&&s[i]<='9') {
            arr[s[i]-'0'] = -1;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (arr[i]!=-1) {
            if (status==1){
                cout << i;
                status = 0;
            }
            else cout << "," << i;
        }
        else if (arr[i]==-1) {
            c++;
        }
    }
    if (c==10) {
        cout << "None";
    }
}