#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int h, w;
	cin >> h >> w;
	cout << min(h, w) * 100 / 2;

	return 0;
}