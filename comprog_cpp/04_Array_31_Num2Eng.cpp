#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    long long int N;
    cin >> N;
    string words;
    string ones[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string teens[10] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string tys[10] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string units[5] = {"","thousand", "million", "billion", "trillion"};
    long long int onei      = N%10;
    long long int teni      = (N%((long long int)pow(10,2))) /((long long int)pow(10,1));
    long long int hundredi  = (N%((long long int)pow(10,3))) /((long long int)pow(10,2));
    long long int thousandi = (N%((long long int)pow(10,6))) /((long long int)pow(10,3));
    long long int millioni  = (N%((long long int)pow(10,9))) /((long long int)pow(10,6));
    long long int billioni  = (N%((long long int)pow(10,12)))/((long long int)pow(10,9));
    long long int trillioni = (N%((long long int)pow(10,15)))/((long long int)pow(10,12));
    long long int uniti[5] = {0,thousandi,millioni,billioni,trillioni};
    for (int i = 4; i >= 0; i--) {
        if (uniti[i] > 0) {
            int h = uniti[i]/100;
            int t = (uniti[i]%100)/10;
            int o = uniti[i]%10;
            if (h > 0) {
                words += ones[h] + " hundred ";
            }
            if (t==1&&o>0) {
                words += teens[o] + " ";
            }
            if (t>1) {
                words += tys[t] + " ";
            }
            if (t!=1&&o>0) {
                words += ones[o] + " ";
            }
            words += units[i] + " ";
        }
    }
    if (hundredi > 0) {
        words += ones[hundredi] + " hundred ";
    }
    if (teni==1&&onei>0) {
        words += teens[onei] + " ";
    }
    if (teni>1) {
        words += tys[teni] + " ";
    }
    if (teni!=1&&onei>0) {
        words += ones[onei] + " ";
    }
    if (N>0) {
        cout << words;
    }
    else {
        cout << "zero";
    }
}