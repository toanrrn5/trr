#include <iostream>

using namespace std;

int x, y, gcd;

void extended (int a, int b) {
    if (b == 0) {
        x = 1; y = 0;
        gcd = a;
    }
    else {
        extended(b, a%b);
        int tmp = x;
        x = y;
        y = tmp - (a/b) * y;
    }
}

void inverse(int a, int m) {
    extended (a,m);
    if (gcd != 1)
        cout << "Không tồn tại nghịch đảo của a modulo m.";
    else
        cout << (x % m + m) % m;
}

int main() {
    int a, m;
    cin >> a >> m;

    inverse (a,m);
    return 0;
}
