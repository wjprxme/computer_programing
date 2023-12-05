#include <iostream>
#include <map>
using namespace std;
int main () {
    int N;
    cin >> N;
    string currency;
    double exchange;
    map <string, double> maprate;
    maprate["THB"] = 1;
    for (int i = 0; i < N; i++) {
        cin >> currency >> exchange;
        maprate[currency] = exchange;
    }
    int total;
    cin >> total >> currency;
    cout << total << ' ' << currency;
    string nextcurrency;
    while (cin >> nextcurrency) {
        total = (int)(total * maprate[currency] / maprate[nextcurrency]);
        currency = nextcurrency;
        cout << " -> " << total << ' '<< currency;
    }
}