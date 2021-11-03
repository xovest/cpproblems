#include <bits/stdc++.h>
using namespace std;

int eul(int a, int b) {
    int c;
    while (b) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    int n;
    cin >> n;

    vector<int> digs;
    while (n) {
        digs.push_back(n % 10);
        n /= 10;
    }

    int a = 0;
    for (int i = digs.size() - 1; i > digs.size() / 2; --i)
        a = a * 10 + digs[i];
    a = a * 10 + digs[digs.size() / 2];

    int b = 0;
    for (int i = digs.size() / 2 - 1; i >= 0; --i)
        b = b * 10 + digs[i];

    if (digs.size() % 2 == 1) a /= 10;

    cout << eul(a, b);
}