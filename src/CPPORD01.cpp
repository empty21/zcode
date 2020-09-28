//--===-- Created by Thieu Quan Ngoc on 9/25/20. --===--//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long

void solve() {
    vector<int> arr;
    int n, k, temp;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    cout << arr.at(k-1) << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}