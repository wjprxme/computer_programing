#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main () {
    string name, category;
    map <string, string> mapanimal;
    vector <string> order;
    while (cin >> name >> category) {
       mapanimal[category] += name + " ";
       if (find(order.begin(),order.end(), category) == order.end()) {
            order.push_back(category);
       }
    }
    for (int i = 0; i < order.size(); i++) {
        cout << order[i] << ": " << mapanimal[order[i]] << endl;
    }
}