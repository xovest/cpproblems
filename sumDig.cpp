#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a) {
    if (a <= 1) return 0;
    for (int d = 2; d * d <= a; ++d)
        if (a % d == 0) return 0;
    return 1;
}

int sumCif(int a) {
    int sum = 0;
    while (a) {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int main() {
    int n, a[1000];
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int ans = 0;
    for (int i = 0; i < n; ++i)
        if (isPrime(a[i]) && isPrime(sumCif(a[i]))) ++ans;

    cout << ans;
}