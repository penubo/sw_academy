#include <bits/stdc++.h>

using namespace std;

bool check(long long x) {
	int prev, curr;
	prev = x % 10;
	x /= 10;

	while (x > 0) {
		curr = x % 10;
		if (curr + 1 != prev)
			return false;
		prev = curr;
		x /= 10;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tt;
	cin >> tt;

	for (int t = 1; t <= tt; ++t) {
		int n;
		long long ret = -1;
		cin >> n;
		vector<long long> a;
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			a.push_back(x);
		}
		sort(a.rbegin(), a.rend());
		long long sum;

		for (int i = 0; i < n-1; ++i) {
			for (int j = i + 1; j < n; ++j) {
				sum = a[i] * a[j];
				if (check(sum) && ret < sum) {
					ret = sum;
				}	
			}
		}
		cout << "#" << t << " " << ret << "\n";
	}
}