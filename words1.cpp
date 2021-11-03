#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[256];
    cin.getline(s, 256);

    vector<string> words;
    char *token = strtok(s, " ");
    while (token != NULL) {
        words.push_back(token);
        token = strtok(NULL, " ");
    }

    int three = 0;
    for (auto i : words) if (i.size() == 3) three++;
    cout << three << "\n";

    string vows = "aeiouAEIOU";
    for (auto i : words) {
        if (vows.find(i[0]) != string::npos && vows.find(i[i.size() - 1]) != string::npos)
            cout << i << "\n";
    }

    int mx = 0;
    for (auto i : words) {
        mx = max(mx, (int)i.size());
    }
    cout << mx;
}