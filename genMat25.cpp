#include <iostream>
using namespace std;

int main() {
    int n, mat[20][20] = {{0}};
    cin >> n;

    for (int i = 0; i < n; ++i)
        mat[i][0] = i + 1;
    for (int i = 1; i < n; ++i)
        mat[n - 1][i] = n;

    for (int i = 1; i < n; ++i)
        for (int j = 0; j < n - 1; ++j)
            mat[j][i] = mat[j][i - 1] + mat[j + 1][i - 1];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << mat[i][j] << " ";
        cout << "\n";
    }
}