#include <bits/stdc++.h>
using namespace std;

bool isGood(int a) {
    int c = a;
    vector<int> digs;
    while (c) {
        digs.push_back(c % 10);
        c /= 10;
    }

    bool ok = 1;
    for (int i : digs) {
        if (i == 0) continue;
        if (a % i != 0) ok = 0;
    }

    return ok;
}

int main() {
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = a; i <= b; ++i)
        if (isGood(i)) ++ans;
    cout << ans;
}