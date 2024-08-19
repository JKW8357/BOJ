#include <bits/stdc++.h>
using namespace std;

int arr[100005];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) cin >> arr[i];
	sort(arr + 1, arr + n + 1, greater<int>());

	int ans = 0;
	for (int i = 1; i <= n; i++)
		if (i % 3 != 0) ans += arr[i];

	cout << ans << '\n';
	return 0;
}