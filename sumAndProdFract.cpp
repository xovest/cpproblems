#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int prod_numar = a * c, prod_numi = b * d;
    int x = b, y = d;
    while (x != y)
        if (x > y)
            x -= y;
        else
            y -= x;
    int cmmmc = (b * d) / x;
    if (b != d) {
        int s1 = cmmmc / b, s2 = cmmmc / d;
        a *= s1;
        b *= s1;
        c *= s2;
        d *= s2;
    }
    int k, l, sum_numar = a + c;
    while (k != 1) {
        for (int i = 1; i <= sum_numar && i <= b; ++i)
            if (sum_numar % i == 0 && b % i == 0)
                k = i;
        sum_numar /= k;
        b /= k;
    }
    while (l != 1) {
        for (int i = 1; i <= prod_numar && i <= prod_numi; ++i)
            if (prod_numar % i == 0 && prod_numi % i == 0)
                l = i;
        prod_numar /= l;
        prod_numi /= l;
    }
    cout << sum_numar << " " << b << endl << prod_numar << " " << prod_numi;
}