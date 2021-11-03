#include <bits/stdc++.h>
using namespace std;

bool allDif(string s) {
    vector<char> lets;
    for (int i = 0; i < s.length(); ++i)
        lets.push_back(s[i]);

    bool ok = 1;
    for (int i = 0; i < lets.size(); ++i)
        for (int j = 0; j < lets.size(); ++j) {
            if (i == j) continue;
            if (lets[i] == lets[j]) ok = 0;
        }

    return ok;
}

int main() {
    char s[256];
    cin.getline(s, 256);

    vector<string> words;
    char *token = strtok(s, " ");
    while (token != NULL) {
        words.push_back(token);
        token = strtok(NULL, " ");
    }

    vector<string> different;
    for (int i = 0; i < words.size(); ++i) {
        if (allDif(words[i])) different.push_back(words[i]);
    }

    if (!different.size()) {
        cout << -1;
    } else {
        string ans = different[0];
        int mx = different[0].length();
        for (auto wrd : different) {
            if (wrd.length() > mx) {
                mx = wrd.length();
                ans = wrd;
            }
        }
        cout << ans;
    }
}