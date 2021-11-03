#include <bits/stdc++.h>
using namespace std;

bool pb(int a, int b) {
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
    int n, a[1000];
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int ans = 0;
    for (int i = 0; i < n; ++i)
        if (pb(a[i], rev(a[i]))) ++ans;
    cout << ans;
}