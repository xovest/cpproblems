#include <bits/stdc++.h>
using namespace std;

ifstream fin("halfsort.in");
ofstream fout("halfsort.out");

int main() {
    int n, a[100];
    fin >> n;
    for (int i = 0; i < n; ++i)
        fin >> a[i];

    for (int i = 0; i < n / 2; ++i)
        for (int j = i + 1; j < n / 2; ++j)
            if (a[i] > a[j]) swap(a[i], a[j]);

    for (int i = n / 2; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            if (a[i] < a[j]) swap(a[i], a[j]);

    for (int i = 0; i < n; ++i)
        fout << a[i] << " ";
}