#include<bits/stdc++.h>
using namespace std;

int ang;

inline bool read() {
	if(!(cin >> ang))
		return false;
	return true;
}

inline void solve() {
	int g = __gcd(ang, 180);
	int k = ang / g;
	int n = 180 / g;
	
	if(k + 1 == n)
		k *= 2, n *= 2;
	cout << n << endl;
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	int tt = clock();
#endif
	cout << fixed << setprecision(15);
	
	int tc; cin >> tc;
	while(tc--) {
		assert(read());
		solve();
		
#ifdef _DEBUG
		cerr << "TIME = " << clock() - tt << endl;
		tt = clock();
#endif
	}
	return 0;
}