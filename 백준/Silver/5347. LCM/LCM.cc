#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int tc;
	cin >> tc;
	
	while (tc--) {
		long long a, b;
		cin >> a >> b;
		cout << lcm(a, b) << '\n';
	}

	return 0;
}