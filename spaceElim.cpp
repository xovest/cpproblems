#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[256];
    cin.getline(s, 256);

    int startIndex = 0;
    for (int i = 0; i < strlen(s); ++i) {
        if (s[i] != ' ') {
            startIndex = i;
            break;
        }
    }

    string ans = "";
    bool blocked = 1;
    for (int i = startIndex; i < strlen(s); ++i) {
        if (s[i] != ' ') {
            if (blocked == 1) {
                blocked = 0;
                ans += ' ';
            }
            ans += s[i];
        } else blocked = 1;
    }

    for (int i = 1; i < ans.length(); ++i) cout << ans[i];
}