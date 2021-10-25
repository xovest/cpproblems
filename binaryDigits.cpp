#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    cout << "0\n";
    
    for (int i = 1; i < pow(2, n); ++i) {
        int v[n], no = i, pos = 0;
        while (no) {
            v[pos++] = no % 2;
            no /= 2;
        }
        for (int j = pos - 1; j >= 0; --j)
            cout << v[j];
        cout << "\n";
    }
    
    return 0;
}
