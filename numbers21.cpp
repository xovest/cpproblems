#include <bits/stdc++.h>
using namespace std;

bool eul(int a, int b) {
    int c;
    while (b) {
        c = a % b;
        a = b;
        b = c;
    }
    return a == 1;
}

int rev(int a) {
    int inv = 0;
    while (a) {
        inv = inv * 10 + a % 10;
        a /= 10;
    }
    return inv;
}

int main() {
    int a, b, sum = 0;
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;

        if (eul(a, b) && eul(rev(a), rev(b))) sum += a + b;
    }
    cout << sum;
}