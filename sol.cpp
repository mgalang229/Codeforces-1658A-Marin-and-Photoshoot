#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	//1010110000100000101
	//101101101101101101101101101101101101
	int ans = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == '0') {
			int id = i + 1;
			int ones = 0;
			while(s[id] != '0' && id < n) {
				ones += (s[id] == '1');
				id++;
			}
			i = id - 1;
			if(ones == 0 && id < n) {
				ans += 2;
			}
			else if(ones == 1 && id < n) {
				ans += 1;
			}
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T = 1;
	cin >> T;
	for(int tc = 0; tc < T; tc++) {
		test_case();
	}
}
