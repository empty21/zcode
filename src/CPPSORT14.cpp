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
#include <algorithm>

using namespace std;
void solve() {
    int n, temp, res = 0, min, max;
    set<int> arr;
    cin >> n;
    while(n--) {
        cin >> temp;
        arr.insert(temp);
    }
    min = *arr.begin();
    max = *arr.begin();
    for(int e: arr) {
        if(e < min) min = e;
        if(e > max) max = e;
    }
    for(int i = min + 1; i < max; i++) {
        if(arr.count(i) == 0) res++;
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}