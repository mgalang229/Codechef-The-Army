#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m;
		cin >> n >> m;
		int mx = INT_MIN;
		int mn = INT_MAX;
		for (int i = 0; i < m; i++) {
			int x;
			cin >> x;
			// find the minimum value
			mn = min(mn, x);
			// find the maximum value
			mx = max(mx, x);
		}
		// Observation:
		// max(0 - 2, 0 - 3) = 3
		// max(1 - 2, 1 - 3) = 2
		// max(2 - 2, 2 - 3) = 1
		// max(3 - 2, 3 - 3) = 1
		// max(4 - 2, 4 - 3) = 2
		// max(5 - 2, 5 - 3) = 3
		for (int i = 0; i < n; i++) {
			// compare the distances between the current index and the minimum position
			// or the current index and the maximum position
			// based on the observation above, we can see that if the earlier indices
			// from 0 to 2, the largest value that will be stored comes from their difference
			// with the maximum position, while indices from 3 to 5, the largest valuet that
			// will be stored comes from their difference with the minimum position
			cout << max(abs(i - mn), abs(i - mx)) << " ";
		}
		cout << '\n';
	}
	return 0;
}
