#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int no = 1;
    for (int i = 0; i < n * 2; ++i) {
        int mx = 0;
        for (int j = 0; j < n * 2; ++j) {
            cout << no << " ";
            mx = max(mx, no);
            if (i % 2 == 0) no += 2;
            else no -= 2;
        }
        no = mx + 1;
        cout << "\n";
    }
}