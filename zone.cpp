#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("zone.in");
    ofstream fout("zone.out");
    
    int n, v[300];
    fin >> n;
    for (int i = 0; i < 3 * n; ++i)
        fin >> v[i];

    int par = -1, pindex = 0;
    for (int i = 0; i < n; ++i)
        if (v[i] % 2 == 0) {
            par = v[i];
            pindex = i;
            break;
        }

    int impar = -1, iindex = 0;
    for (int i = 3 * n - 1; i >= 2 * n; --i)
        if (v[i] % 2 == 1) {
            impar = v[i];
            iindex = i;
            break;
        }

    if (par != -1 && impar != -1)
        swap(v[pindex], v[iindex]);

    for (int i = 0; i < 3 * n; ++i)
        fout << v[i] << " ";
}