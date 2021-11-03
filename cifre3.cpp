#include <bits/stdc++.h>
using namespace std;

bool notComm(int a, int b) {
    vector<int> aDigs;
    while (a) {
        aDigs.push_back(a % 10);
        a /= 10;
    }

    vector<int> bDigs;
    while (b) {
        bDigs.push_back(b % 10);
        b /= 10;
    }

    int notComm = 1;
    for (int i = 0; i < aDigs.size(); ++i)
        for (int j = 0; j < bDigs.size(); ++j)
            if (aDigs[i] == bDigs[j]) notComm = 0;

    return notComm;
}

int main() {
    int n;
    cin >> n;

    for (int i = 2; i < n; ++i)
        if (notComm(i * i, i * i * i)) cout << i << " ";
}