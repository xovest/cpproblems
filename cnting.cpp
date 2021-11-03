#include <bits/stdc++.h>
using namespace std;

int sumCif(int a) {
    int sum = 0;
    while (a) {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int ans = 0;
    for (int i = 0; i < n - 1; ++i)
        if (sumCif(a[i]) % 2 != sumCif(a[i + 1]) % 2) ++ans;

    cout << ans;
}