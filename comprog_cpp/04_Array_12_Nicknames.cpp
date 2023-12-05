#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    string x;
    string name[10] = {"Robert","William","James","John","Margaret","Edward","Sarah","Andrew","Anthony","Deborah"};
    string nickname[10] = {"Dick","Bill","Jim","Jack","Peggy","Ed","Sally","Andy","Tony","Debbie"};
    for (int i = 0; i < N; i++) {
        bool status = false;
        cin >> x;
        for (int i = 0; i < 10; i++) {
            if (x==name[i]) {
                cout << nickname[i] << endl;
                status = true;
            }
            else if (x==nickname[i]) {
                cout << name[i] << endl;
                status = true;
            }
        }
        if (status==false) {
            cout << "Not found" << endl;
        }
    }
}