#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
using namespace std;
int main () {
    int n;
    cin >> n;
    double x, y;
    vector <pair<double, double> > position;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        position.push_back(make_pair(x, y));
    }
    vector <pair<double, int> > distance;
    for (int i = 0; i < n; i++) {
        distance.push_back(make_pair(sqrt(pow(position[i].first,2)+pow(position[i].second,2)), i + 1));
    }
    sort(distance.begin(), distance.end());
    cout << '#' << distance[2].second << ": " << '(' << position[distance[2].second - 1].first << ", " << position[distance[2].second - 1].second << ')';
}