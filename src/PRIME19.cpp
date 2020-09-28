//--===-- Created by Thieu Quan Ngoc on 9/25/20. --===--//
#include <iostream>

using namespace std;

#define ll long long

//a^b mod c
ll bigModulo(ll a, ll b, ll c) {
    ll result = 1;
    a %= c;
    while(b > 0) {
        if(b & 1) result = (result * a % c) % c;
        b /= 2;
        a = (a * a) % c;
    }
    return result;
}
//n = 2^s * d
pair<ll, ll> factor(ll n) {
    ll s = 0;
    while (n % 2 == 0) {
        s++;
        n /= 2;
    }
    return { s, n };
}
int main() {

}