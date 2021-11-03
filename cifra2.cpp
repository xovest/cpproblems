#include <bits/stdc++.h>
using namespace std;

ifstream fin("cifra2.in");
ofstream fout("cifra2.out");

int main() {
    int n;
    fin >> n;
    int no = n;

    vector<int> v;
    while (n) {
        v.push_back(n % 10);
        n /= 10;
    }

    //2 3 4 5 6
    reverse(v.begin(), v.end());

    //no = 23456
    int cnt = 0;
    while (no > 10) {
        int mn = 9;
        for (int i = 0; i < v.size(); ++i) {
            if (v[i] == -1) continue;
            mn = min(mn, v[i]);
        }

        if (cnt == 0) fout << mn << "\n";

        no = 0;
        for (int i = 0; i < v.size(); ++i) {
            if (v[i] == -1) continue;
            if (v[i] != mn)
                no = no * 10 + (v[i] - mn);
            else
                v[i] = -1;
        }

        if (cnt == 0) fout << no << "\n";

        ++cnt;
    }

    fout << no;
}