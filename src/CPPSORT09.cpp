//--===-- Created by Thieu Quan Ngoc on 9/28/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve() {
    int n, k, temp, count = 0;
    vector<int> arr;
    cin >> n >> k;
    while(n--) {
        cin >> temp;
        arr.push_back(temp);
    }

    for(int i = 0; i < arr.size() - 1; i++) {
        for(int j = i+1; j < arr.size(); j++) {
            if(arr.at(i) + arr.at(j) == k) count++;
        }
    }
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}