#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;
	if (T == 1) {
		int a, b;
		cin >> a >> b;
		int firstEqual;
		for (int i = a; i <= b; ++i) {
			if (i < 10) {
				cout << i << " ";
				continue;
			}

			int no = i, good = 1;
			while (no > 9) {
				if (no % 10 != (no / 10) % 10)
					good = 0;
				no /= 10;
			}
			if (good) {
				firstEqual = i;
				break;
			}
		}

		int tempDigits = firstEqual, fEdigits = 0;
		while (tempDigits) {
			++fEdigits;
			tempDigits /= 10;
		}

		int mainDecreaser = 0;
		for (int i = 1; i <= fEdigits; ++i)
			mainDecreaser = mainDecreaser * 10 + 1;

		while (true) {
			cout << firstEqual << " ";
			firstEqual += mainDecreaser;
			if (firstEqual > b)
				break;

			if (firstEqual % 10 == 9) {
				cout << firstEqual << " ";
				firstEqual = firstEqual + 1 + mainDecreaser;
				mainDecreaser = mainDecreaser * 10 + 1;
			}
		}
	} else {
		int x;
		cin >> x;
		for (int i = 1; i <= 9; ++i)
			cout << i << " ";

		if (x == 1)
			return 0;

		int firstEqual = 11;
		int mainDecreaser = 11;
		int power = pow(10, x);

		while (true) {
			if (firstEqual > power) {
				break;
			}
			cout << firstEqual << " ";
			firstEqual += mainDecreaser;

			if (firstEqual % 10 == 9) {
				cout << firstEqual << " ";
				firstEqual = firstEqual + 1 + mainDecreaser;
				mainDecreaser = mainDecreaser * 10 + 1;
			}
		}
	}
	return 0;
}