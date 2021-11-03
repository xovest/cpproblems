#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    vector<int> neg, nul, pos;
    for (int i = 0; i < n; ++i) {
        if (v[i] < 0) neg.push_back(v[i]);
        else if (v[i] == 0) nul.push_back(v[i]);
        else pos.push_back(v[i]);
    }

    sort(neg.begin(), neg.end(), greater<int>());
    sort(pos.begin(), pos.end(), greater<int>());

    for (int i : neg) cout << i << " ";
    for (int i : nul) cout << i << " ";
    for (int i : pos) cout << i << " ";
}