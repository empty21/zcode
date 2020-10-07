//--===-- Created by Thieu Quan Ngoc on 9/28/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <iostream>
#include <set>
using namespace std;

void solve() {
    set<long> arr;
    long n, temp;
    cin >> n;
    while(--n) {
        cin >> temp;
        arr.insert(temp);
    }
    long i = 0;
    while(++i) {
        if(arr.count(i) == 0) {
            cout << i << endl;
            break;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}