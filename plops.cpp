#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[1000];
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int mx = 0, cnt = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (abs(a[i] - a[i + 1]) > mx) {
            mx = abs(a[i] - a[i + 1]);
            cnt = 1;
        } else if (abs(a[i] - a[i + 1]) == mx) ++cnt;
    }

    cout << mx << " " << cnt;
}