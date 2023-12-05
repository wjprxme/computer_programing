#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <utility>
#include <cmath>
using namespace std;

int main() {
    map <double, string> scoreparty;
    map <double, pair <double, double> > scoreremainnumber;
    pair <double, double> remainnumber;
    double score, remain, number, total = 0;
    int sum = 100; 
    string party;
    while (cin >> party) {
        if (party == "END") {          
            break;
        }
        cin >> score;
        total += score;
        remainnumber = make_pair(0,0);
        scoreremainnumber[-score] = remainnumber;
        scoreparty[-score] = party;
    }
    set <double> setremain;
    for (auto & itr : scoreremainnumber) {
        itr.second.second = itr.first * 100 / total;
        number = ceil(itr.second.second);
        remain = itr.second.second - number;
        remainnumber = make_pair(remain, number);
        scoreremainnumber[-score] = remainnumber;
        sum += number;
        setremain.insert(remain);
        //cout << number << ' ' << remain << endl;
    }
    scoreremainnumber[0] = make_pair(0, 0);
    // cout << sum;
    // auto itr = setremain.begin();
    // int c = 1;
    // for(auto end = setremain.end();itr != end;++itr){
    //     if(c==sum) break;
    //     for (auto& e: scoreremainnumber) {
    //         if((*itr)== e.second.first) {
    //             e.second.second--;
    //             cout << e.second.second;
    //         }
    //     }
    //     c++;
    // }
    // for(auto & i : scoreremainnumber)
    //     cout << i.second.first << '\n';
    auto itr = setremain.begin();
    while(sum--){
        for(auto & i : scoreremainnumber){
            //cout << *itr << ' ' << (double)i.second.second- (int)i.second.second<< '\n';
            if(*itr == (double)i.second.second- (int)i.second.second){
                i.second.second--;
                break;
            }
        }
        itr++;
    }
    // auto i = setremain.begin();
    // while (sum > 0) {
    //     for (auto & itr : scoreremainnumber) {
    //         if (*i == itr.second.first) {
    //             itr.second.second--;
    //             sum--;
    //             setremain.erase(*i);
    //         }
            
    //     }
    // }
//     cout << sum;
    for (auto & itr : scoreremainnumber) {
        if(-(int)(itr.second.second) != 0)
        cout << scoreparty[itr.first] << ' ' << -(int)(itr.second.second) << ' ' << -itr.first << endl;
    }
}





//     while (cin >> party) {
//         if (party == "END") {
//             break;
//         }
//         cin >> score;
//         scoreparty[-score] = party;
//         partynumber[party] = 0;
//         total += score;
//     }

//     for (auto &itr : scoreparty) {
//         double number = (-itr.first * 100) / total;
        
//         partynumber[itr.second] = number;
//     }

//     int remaining = 100;
//     for (auto &itr : partynumber) {
//         remaining -= (int)itr.second;
//     }

//     // Distribute the remaining percentage to the parties with the highest scores
//     for (auto &itr : partynumber) {
//         if (remaining > 0) {
//             partynumber[itr.first] += 1;
//             remaining -= 1;
//         } else {
//             break;
//         }
//     }

//     for (auto &itr : scoreparty) {
//         if (partynumber[itr.second] > 0) {
//             cout << itr.second << ' ' << partynumber[itr.second] << ' ' << -itr.first << endl;
//         }
//     }
// }
