#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream cin("C5.in");
ofstream cout("C5.out");

int fact(int number) {
    if (number <= 1) 
        return 1;
    else 
        return number * fact(number - 1);
}

int main() {
    int C; 
    cin >> C;
    if (C == 1) {
        int n, v[101], max1 = 0, max2 = 0, minimum = 10000;
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            cin >> v[i];
            if (v[i] > max1) {
                max2 = max1;
                max1 = v[i];
            } else if (v[i] > max2)
                max2 = v[i];
            minimum = min(v[i], minimum);
        }
		if (max2 - minimum < 100) {
    		cout << "unfavorable number" << endl;
    		return 0;
		}
        for (int i = max2 - minimum; i >= 101; --i) {
            int prime = 1;
            for (int d = 2; d * d <= i; ++d) 
                if (i % d == 0) 
                    prime = 0;
            int c = i, rev = 0, cpy = i;
            while (c) {
                rev = rev * 10 + c % 10;
                c /= 10;
            }
            if (prime && cpy == rev) 
                cout << i << " ";
        }
    } else if (C == 2) {
        int n, v[101];
        cin >> n;
        int digSum[101];
        for (int i = 1; i <= n; ++i) {
            cin >> v[i];
            int sum = 0, cpy = v[i];
            while (cpy) {
                sum += cpy % 10;
                cpy /= 10;
            }
            digSum[i] = sum;
        }
        for (int i = 1; i <= n; ++i)
            for (int j = i + 1; j <= n; ++j)
                if (digSum[i] > digSum[j]) {
                    int aux = digSum[i];
                    digSum[i] = digSum[j];
                    digSum[j] = aux;
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
        for (int i = 1; i <= n; ++i) 
            cout << v[i] << " ";
    } else if (C == 3) {
        string word;
        char letter;
        cin >> word >> letter;
        int noApp = 0, evenSum = 0, oddSum = 0;
        for (int i = 0; i < word.length(); ++i) 
            if (word[i] == letter) 
                ++noApp; 
        for (int i = 1; i <= noApp; ++i) 
            if (i % 2 == 0) 
                evenSum += i; 
            else 
                oddSum += i;
        if (evenSum > oddSum)
            cout << fact(evenSum) / (fact(evenSum - oddSum) * fact(oddSum)) << endl;
        else
            cout << fact(oddSum) / (fact(oddSum - evenSum) * fact(evenSum)) << endl;
    } else if (C == 4) {
        int a, b; 
        cin >> a >> b;
        int c = b;
        while (c) {
            a *= 10;
            c /= 10;
        }
        int concat = a + b, ctrlDig;
        while (concat > 9) {
            ctrlDig = 0;
            while (concat) {
                ctrlDig += concat % 10;
                concat /= 10;
            }
            concat = ctrlDig;
        }
        int n, mat[101][101];
        int ans = 0;
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j) {
                cin >> mat[i][j];
                if ((i == j || i + j == n - 1) && mat[i][j] == ctrlDig) 
                    ++ans;
            }
        cout << ans << endl;
    } else {
        int n, v[101];
        cin >> n;
        for (int i = 1; i <= n; ++i) 
            cin >> v[i];
        int perfsqPairs = 0, primePairs = 0;
        for (int i = 1; i <= n; ++i)
            for (int j = i + 1; j <= n; ++j) {
                if (sqrt(v[i] + v[j]) == (int)(sqrt(v[i] + v[j]))) 
                    ++perfsqPairs;
                int viCpy = v[i], vjCpy = v[j], eul;
                while (vjCpy) {
                    eul = viCpy % vjCpy;
                    viCpy = vjCpy;
                    vjCpy = eul;
                }
                if (viCpy == 1) 
                    ++primePairs;
            }
        cout << perfsqPairs << " " << primePairs << endl;
    }
    return 0;
}