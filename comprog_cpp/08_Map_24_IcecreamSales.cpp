#include <iostream>
#include <map>
using namespace std;
int main () {
    int N;
    cin >> N;
    string name;
    double price;
    map <string, double> mapnameprice;
    for (int i = 0; i < N; i++) {
        cin >> name >> price;
        mapnameprice[name] = price;
    }
    int M;
    cin >> M;
    double number;
    double total = 0;
    double maxtotal = 0;
    map <string, double> mapnametotal;
    for (int i = 0; i < M; i++) {
        cin >> name >> number;
        if (mapnameprice.find(name) != mapnameprice.end()) {
            mapnametotal[name] += mapnameprice[name] * number;
            maxtotal = max(maxtotal, mapnametotal[name]);
            total += mapnameprice[name] * number;
        }
    }
    if (total != 0) {
        cout << "Total ice cream sales: " << total << endl;
        cout << "Top sales: ";
        for (auto itr = mapnametotal.begin(); itr != mapnametotal.end(); itr++) {
            if ((*itr).second == maxtotal) {
                cout << (*itr).first << ' ';
            }
        }
    }
    else {
        cout << "No ice cream sales";
    }
    
}