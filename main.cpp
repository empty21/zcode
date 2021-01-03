#include <bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cin >> n;
    string nString = to_string(n);
    reverse(nString.begin(), nString.end());
    n = stol(nString);
    cout << n;
}