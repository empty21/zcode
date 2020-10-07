//--===-- Created by Thieu Quan Ngoc on 9/28/20. --===--//
//      _______ _     _             ____  _   _         //
//     |__   __| |   (_)           / __ \| \ | |        //
//        | |  | |__  _  ___ _   _| |  | |  \| |        //
//        | |  | '_ \| |/ _ \ | | | |  | | . ` |        //
//        | |  | | | | |  __/ |_| | |__| | |\  |        //
//        |_|  |_| |_|_|\___|\__,_|\___\_\_| \_|        //
//------------------------------------------------------//
#include <iostream>
using namespace std;
#define ll long long

void solve() {
   ll n, temp, min, subMin;
   cin >> n;
   cin >> min;
   subMin = min;
   while(--n) {
       cin >> temp;
       if(temp < min) {
           subMin = min;
           min = temp;
       } else if(temp < subMin) {
           subMin = temp;
       }
   }
   if(min == subMin) cout << -1 << endl;
   else cout << min << " " << subMin << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}