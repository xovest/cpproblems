#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<int> aCif, bCif;
    while (a) {
        aCif.push_back(a % 10);
        a /= 10;
    }

    while (b) {
        bCif.push_back(b % 10);
        b /= 10;
    }

    bool ok = 0;
    for (int i = 0; i < aCif.size(); ++i)
        for (int j = 0; j < bCif.size(); ++j)
            if (aCif[i] == bCif[j]) ok = 1;

    cout << (ok ? "da" : "nu");
}