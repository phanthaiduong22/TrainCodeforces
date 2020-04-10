#include <iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int i = n, j = 1;
	for (int u = 0; u < n; u++) {
		if (n - k - 1 > 0) {
			cout << j << " ";
			j++;
			k++;
		}
		else {
			cout << i << " ";
			i--;
		}
	}
}