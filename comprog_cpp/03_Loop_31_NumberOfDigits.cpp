#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    long long int M,N;
    cin >> M;
    cin >> N;
    long long int sum=0;
    string m = to_string(M);
    string n = to_string(N);
    if (m.length()==n.length()) {
        sum = m.length()*(N-M+1);
    }
    if (m.length()!=n.length()) {
        sum += m.length()*((long long int)pow(10,m.length())-M);
        sum += n.length()*(N+1-(long long int)pow(10,n.length()-1));
        int i = 1;
        while (m.length()+i<n.length()) {
            sum += 9*(m.length()+i)*(long long int)pow(10,m.length()+i-1);
            i++;
        }
    }
    cout << sum;
}