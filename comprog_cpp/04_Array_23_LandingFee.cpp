#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string country[n]; 
    int fee[n];
    string x, z;
    int y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        country[i] = x;
        fee[i] = y;
    }
    cin.ignore();
    getline(cin,z);
    string ct[z.length()];
    int k = 0;
    for (int i = 0; i < z.length(); i++) {
        if (i%7==4) {
            for (int j = 0; j < n; j++) {
                if (z.substr(i,2)==country[j]) {
                    ct[k]=z.substr(i,2);
                    k++;
                }
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (ct[i]!=ct[i+1]) {
            for (int j = 0; j < n; j++) {
                if (ct[i+1]==country[j]) {
                    sum += fee[j];
                }
            }
        }
    }
    cout << sum;
}