#include <bits/stdc++.h>
using namespace std;

bool primebet(int a, int b) {
    int c;
    while (b) {
        c = a % b;
        a = b;
        b = c;
    }
    return a == 1;
}

int main() {
    vector<int> v;
    int n;
    while (true) {
        cin >> n;
        if (!n) break;
        v.push_back(n);
    }

    int ans = 0;
    for (int i = 0; i < v.size() - 1; ++i)
        if (primebet(v[i], v[i + 1])) ++ans;
    cout << ans;
}