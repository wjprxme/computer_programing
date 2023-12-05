#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int N;
    cin >> N;
    int x1[N], y1[N], x2[N], y2[N];
    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }
    int maxOverlapArea = 0;
    int overlappingRectangles[N*N];
    int c = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int xOverlap = max(0, min(x2[i], x2[j]) - max(x1[i], x1[j]));
            int yOverlap = max(0, min(y2[i], y2[j]) - max(y1[i], y1[j]));
            int overlapArea = xOverlap * yOverlap;
            if (overlapArea > maxOverlapArea) {
                maxOverlapArea = overlapArea;
                overlappingRectangles[0] = i;
                overlappingRectangles[1] = j;
                c = 1;
            } 
            else if (overlapArea == maxOverlapArea) {
                overlappingRectangles[c * 2] = i;
                overlappingRectangles[c * 2 + 1] = j;
                c++;
            }
        }
    }
    if (maxOverlapArea != 0) {
        cout << "Max overlapping area = " << maxOverlapArea << endl;
        for (int i = 0; i < c; i++) {
            cout << "rectangles " << overlappingRectangles[i*2] << " and " << overlappingRectangles[i*2+1] << endl;
        }
    } 
    else {
        cout << "No overlaps" << endl;
    }
}