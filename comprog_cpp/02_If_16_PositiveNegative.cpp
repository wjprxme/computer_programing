#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n+abs(n)) cout << "positive" << endl;
    else if (n==0) cout << "zero" << endl;
    else cout << "negative" << endl;
    if (abs(n)%2) cout << "odd";
    else cout << "even";
    return 0;
}