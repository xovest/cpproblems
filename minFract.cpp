#include <bits/stdc++.h>
using namespace std;

int cm(int a, int b) {
    int c;
    while (b) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    int n, a[1000];
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int numAns = 0, denAns = 0;
    double fract = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            if (i == j) continue;
            int num = a[i], den = a[j];
            int div = cm(num, den);
            num /= div;
            den /= div;
            if ((double) num / (double) den > fract) {
                fract = (double) num / (double) den;
                numAns = num;
                denAns = den;
            }
        }

    cout << denAns << '/' << numAns;
}