#include <bits/stdc++.h>
using namespace std;

ifstream fin("spirala.in");
ofstream fout("spirala.out");

int main() {
    int n;
    fin >> n;
    int mat[n][n];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            fin >> mat[i][j];

    int i = 0, j = -1;
    int bound = 0;
    while (true) {
        while (true) { //right
            fout << mat[i][++j] << " ";
            if (j == n - bound - 1) break;
        }

        if (i == n / 2 && j == n / 2 - (n % 2 == 0)) break;

        while (true) { //down
            fout << mat[++i][j] << " ";
            if (i == n - bound - 1) break;
        }

        if (i == n / 2 && j == n / 2 - (n % 2 == 0)) break;

        while (true) { //left
            fout << mat[i][--j] << " ";
            if (j == bound) {
                ++bound;
                break;
            }
        }

        if (i == n / 2 && j == n / 2 - (n % 2 == 0)) break;

        while (true) { //up
            fout << mat[--i][j] << " ";
            if (i == bound) break;
        }

        if (i == n / 2 && j == n / 2 - (n % 2 == 0)) break;
    }

    return 0;
}