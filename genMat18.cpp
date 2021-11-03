#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long v[n * n];
    v[0] = 1, v[1] = 1;
    for (int i = 2; i < n * n; ++i)
        v[i] = v[i - 1] + v[i - 2];

    int nxt = 0;
    for (int i = 0; i < n; ++i) {
        int prnt[n];
        for (int j = 0; j < n; ++j)
            prnt[j] = v[nxt++];

        if (i % 2 == 0) {
            for (int j = 0; j < n; ++j)
                cout << prnt[j] << " ";
        } else {
            for (int j = n - 1; j >= 0; --j)
                cout << prnt[j] << " ";
        }
        cout << "\n";
    }
}