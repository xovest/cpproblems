#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int no = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << no + j << " 0 " << no + j << " ";
        cout << "\n";
        for (int j = 0; j < n; ++j)
            cout << "0 " << no + j << " 0 ";
        cout << "\n";
        for (int j = 0; j < n; ++j)
            cout << no + j << " 0 " << no + j << " ";
        cout << "\n";

        no += n;
    }
}