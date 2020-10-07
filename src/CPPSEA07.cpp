//--===-- Created by Thieu Quan Ngoc on 10/6/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, k, temp;
    vector<ll> arr;
    cin >> n >> k;
    while(n--) {
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    for(int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}