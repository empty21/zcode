//--===-- Created by Thieu Quan Ngoc on 9/28/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <iostream>
#include <vector>
using namespace std;
#define ll long long

void solve() {
    vector<ll> arr;
    ll n, temp, res;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    res = arr[0] + arr[1];
    for(int i = 0; i < arr.size() - 1; i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            if(abs(arr[i]+arr[j]) < abs(res)) res = arr[i]+arr[j];
        }
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