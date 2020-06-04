// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AXDNGXlKagUDFAVX&categoryId=AXDNGXlKagUDFAVX&categoryType=CODE&&&

#include <bits/stdc++.h>

using namespace std;

int dp[1000001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tt;
	cin >> tt;
	for (int t = 1; t <= tt; t++) {

		int n;
		cin >> n;
		vector<int> arr;
		memset(dp, 0, sizeof(int) * 1000001);

		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			arr.push_back(x);
			dp[x] = 1;
		}

		sort(arr.begin(), arr.end());
		int maxn = arr.back();
		int minn = arr.front();


		for (int i = 0; i < arr.size(); i++) {
			for (int j = 2; arr[i] * j <= maxn; j++) {
				int nn = arr[i] * j;
				if (dp[nn] > 0)
					dp[nn] = max(dp[arr[i]] + 1, dp[nn]);
			}
		}

		cout << "#" << t << " " << *max_element(dp, dp+1000001) << "\n";
	}



}