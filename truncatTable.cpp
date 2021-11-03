#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a) {
    if (a <= 1) return 0;
    for (int d = 2; d * d <= a; ++d)
        if (a % d == 0)
            return 0;
    return 1;
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    while (n) {
        v.push_back(n % 10);
        n /= 10;
    }

    bool ok = 1;
    for (int i = v.size() - 1; i >= 0; --i) {
        int no = 0;
        for (int j = i; j >= 0; --j)
            no = no * 10 + v[j];
        if (!isPrime(no)) ok = 0;
    }

    cout << (ok ? "DA" : "NU");
}