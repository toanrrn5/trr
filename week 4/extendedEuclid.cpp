#include <bits/stdc++.h>
using namespace std;
#define int long long

int x, y, gcd;

void extendEuclid(int a, int b){
    if(a == 0){
        gcd = b; x = 0; y = 1; return;
    }
    extendEuclid(b % a, a);
    int tmp = y; y = x; x = tmp - (b/a) * x;
}

signed main() {

    int a, b; cin >> a >> b;
    extendEuclid(a, b); cout << x << ' ' << y << ' ' << gcd;
}
