//--===-- Created by Thieu Quan Ngoc on 9/25/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    vector<long> arr;
    int n, k;
    long temp;
    cin >> n >> k;
    for(int i = 0; i < n * k; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n * k; i++) cout << arr.at(i) << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}