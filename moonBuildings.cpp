#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int mat[n][m];
	int maxvalue = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j) {
			cin >> mat[i][j];
			--mat[i][j];
			maxvalue = max(mat[i][j], maxvalue);
		}

	int lineStorer[n], columnStorer[m];
	for (int id = 0; id <= maxvalue; ++id) {
		//finding the lines
		int lines = 0;
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < m; ++j)
				if (mat[i][j] == id) {
					++lines;
					break;
				}

		//finding the columns
		int columns = 0;
		for (int i = 0; i < n; ++i) {
			int exitLoop = 0;
			for (int j = 0; j < m; ++j)
				if (mat[i][j] == id) {
					++columns;
					exitLoop = 1;
				}
			if (exitLoop)
				break;
		}

		lineStorer[id] = lines;
		columnStorer[id] = columns;
	}

	int k;
	cin >> k;
	for (int task = 0; task < k; ++task) {
		int ID, len, wid;
		cin >> ID >> len >> wid;
		--ID;

		if (ID > maxvalue) {
			cout << "Got no terrain!" << '\n';
			continue;
		}

		if ((lineStorer[ID] == len && columnStorer[ID] == wid) || (lineStorer[ID] == wid && columnStorer[ID] == len))
			cout << "Satisfied!" << '\n';
		else
			cout << "Not satisfied!" << '\n';
	}
	return 0;
}