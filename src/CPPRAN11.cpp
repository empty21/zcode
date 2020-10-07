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
    int n;
    long temp, min = 1e7;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n - 1; i++) {
        if(arr.at(i+1) - arr.at(i) < min) min = arr.at(i+1) - arr.at(i);
    }
    cout << min << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}