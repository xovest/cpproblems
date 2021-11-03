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

    vector<string> original;
    for (int i = 0; i < words.size(); ++i) {
        int j;
        for (j = 0; j < i; ++j)
            if (words[i] == words[j]) break;
        if (i == j) original.push_back(words[i]);
    }

    sort(original.begin(), original.end());
    for (auto i : original) cout << i << "\n";
}