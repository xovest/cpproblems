#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "1\n";
        return 0;
    }

    if (n == 2) {
        cout << "1 1\n1 1\n";
        return 0;
    }

    int mat[30][30] = {{0}};

    int i = 0, j = 0;
    while (true) {
        mat[i][j] = i % 2 == 0;
        while (true) { //right
            mat[i][++j] = i % 2 == 0;
            if (j == n - i - 1) break;
        }

        while (true) { //down
            mat[++i][j] = j % 2 == 0 + n % 2 == 0;
            if (i == j) break;
        }

        while (true) { //left
            mat[i][--j] = i % 2 == 0 + n % 2 == 0;
            if (j == n - i - 1) break;
        }

        while (true) { //up
            mat[--i][j] = j % 2 == 0;
            if (i == j) break;
        }

        ++i, ++j;
        if (i == n / 2 - (n % 2 == 0)) break;
    }

    //middle now:
    if (n % 2 == 0) {
        if (n % 4 != 0) {
            int mid = n / 2 - 1;
            mat[mid][mid] = mat[mid][mid + 1] = mat[mid + 1][mid] = mat[mid + 1][mid + 1] = 1;
        }
    } else {
        if ((n - 1) % 4 == 0) mat[n / 2][n / 2] = 1;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << mat[i][j] << " ";
        cout << "\n";
    }
} //lol