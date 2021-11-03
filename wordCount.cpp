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

    int ans = 0;
    string vows = "aeiouAEIOU";
    for (auto i : words) {
        if (vows.find(i[0]) != string::npos && vows.find(i[i.size() - 1]) != string::npos)
            ++ans;
    }
    cout << ans;
}