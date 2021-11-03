#include <bits/stdc++.h>
using namespace std;

int sc(int a) {
    int sum = 0;
    while (a) {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int add(int n) {
    return n * (n - 1) / 2;
}

int main() {
    int n, a[100000];
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int freq[82] = {0};
    for (int i = 0; i < n; ++i)
        ++freq[sc(a[i])];

    int ans = 0;
    for (int i = 0; i < 82; ++i)
        ans += add(freq[i]);

    cout << ans;
}