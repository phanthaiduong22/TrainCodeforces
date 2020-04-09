#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int>ans(n);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		ans[x-1] = i + 1;
	}
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
}