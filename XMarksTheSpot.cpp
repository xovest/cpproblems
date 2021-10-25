#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int spacing = 0;
	int midSpacing = n * 2 - 1;
	for (int i = 0; i < n; ++i) {
		int tempSp = spacing;
		while (tempSp) {
			cout << " ";
			--tempSp;
		}
		cout << '\\' << " " << '\\';

		int tempMSp = midSpacing;
		while (tempMSp) {
			cout << " ";
			--tempMSp;
		}
		cout << "/ /" << '\n';

		//spacing update
		++spacing;
		midSpacing -= 2;
	}

	spacing = n - 1;
	midSpacing = 1;
	for (int i = 0; i < n; ++i) {
		int tempSp = spacing;
		while (tempSp) {
			cout << " ";
			--tempSp;
		}
		cout << "/ /";

		int tempMSp = midSpacing;
		while (tempMSp) {
			cout << " ";
			--tempMSp;
		}
		cout << '\\' << " " << '\\' << '\n';

		//spacing update
		--spacing;
		midSpacing += 2;
	}
	return 0;
}
/*
\ \     / /
 \ \   / /
  \ \ / /
  / / \ \
 / /   \ \
/ /     \ \
*/