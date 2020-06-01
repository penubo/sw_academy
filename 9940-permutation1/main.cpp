#include <iostream>
#include <cstring>
#include <set>

using namespace std;

int main() {

	int tt;

	cin >> tt;

	for (int t = 1; t <= tt; t++) {
		int n, x;
		cin >> n;
		bool visited[n+1];
		bool flag = true;
		memset(visited, 0, n+1);

		for (int i = 0; i < n; i++) {
			cin >> x;
			if (visited[x])
				flag = false;
			visited[x] = true;
		}

		if (flag)
			cout << "#" << t << " " << "Yes\n";
		else
			cout << "#" << t << " " << "No\n";d
	}

	return 0;
}