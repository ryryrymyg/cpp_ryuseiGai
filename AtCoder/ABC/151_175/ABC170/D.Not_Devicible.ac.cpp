#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1000000007;
const double PI = acos(-1);

const int amax = 1e6;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());

	vector<int> cnt(amax + 1);
	for (int i = 0; i < n; i++) {
		if (cnt[a[i]] == 0) {
			for (int j = a[i]; j < (int)cnt.size(); j += a[i]) cnt[j] = 1;
		}
		else if (cnt[a[i]] == 1) cnt[a[i]] = 2;
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (cnt[a[i]] == 1) ans++;
	}
	cout << ans << endl;
}
