// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AXE0YJiK3QcDFAVX&categoryId=AXE0YJiK3QcDFAVX&categoryType=CODE

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tt;
	cin >> tt;
	for (int t = 1; t <= tt; t++) {
		int n;
		cin >> n;

		int b = 21;
		int cnt = 52 - n;
		map<int, int> m;
		for (int i = 2; i <= 9; i++) {
			m[i] = 4;
		}
		m[10] = 16;
		m[11] = 4;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			b -= x;
			m[x]--;
		}

		int bc = 0;
		for (auto a : m) {
			if (a.first <= b)
				bc += a.second;
		}

		if (bc <= cnt - bc)
			cout << "#" << t << " " << "STOP" << "\n";
		else
			cout << "#" << t << " " << "GAZUA" << "\n";
	}


}