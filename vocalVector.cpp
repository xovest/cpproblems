#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string str = "aeiou";

    vector<char> vows, cons;
    while (n--) {
        char c;
        cin >> c;
        if (str.find(c) != string::npos) vows.push_back(c);
        else cons.push_back(c);
    }

    for (auto i : vows) cout << i << " ";
    for (auto i : cons) cout << i << " ";
}