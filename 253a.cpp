#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, m;
	string s = "";
	cin >> n >> m;
	while (n > 0 && m > 0) {
		s += "BG";
		n--;
		m--;
	}
	while (m > 0) {
		s = "G" + s;
		m--;
	}
	while (n > 0) {
		s = s + "B";
		n--;
	}
	cout << s;
}
