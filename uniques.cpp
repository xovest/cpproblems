#include <bits/stdc++.h>
using namespace std;

const int MX = (int) 1e6;

int main() {
    ifstream fin("unice1.in");
    ofstream fout("unice1.out");
    
    int n, v[1000];
    fin >> n;
    for (int i = 0; i < n; ++i)
        fin >> v[i];

    int freq[MX + 1] = {0};
    int negFreq[MX + 1] = {0};
    for (int i = 0; i < n; ++i) {
        if (v[i] >= 0)
            ++freq[v[i]];
        else
            ++negFreq[-v[i]];
    }

    int ans = 0;
    for (int i = 1; i < MX + 1; ++i) {
        if (freq[i] == 1) ++ans;
        if (negFreq[i] == 1) ++ans;
    }

    fout << ans;
}