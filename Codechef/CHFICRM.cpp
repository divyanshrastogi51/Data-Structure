#include <bits/stdc++.h>

using namespace std;

int main () {
		int t;
	cin >> t;
	while(t--) {
			int n;
		cin >> n;
			vector < int > vec;
		for(int i = 0; i < n; i++) {
				int temp;
			cin >> temp;
			vec.push_back(temp);
		}
			long long bal[3] = { 0 };
			bool isPossible = true;
		for(auto it : vec) {
			if(it == 10 && bal[0] == 0) {
				isPossible = false;
			} else if (it == 15 && (bal[1] == 0 && bal[0] < 2)) {
				isPossible = false;
			} else {
				bal[(it - 5)/5]++;
				if(it == 10) {
					bal[0]--;
				} else if(it == 15) {
					if(bal[1] > 0) {
						bal[1]--;
					} else {
						bal[0] -= 2;
					}
				}
			}
		} cout << (isPossible ? "YES" : "NO") << endl;
	}
	return 0;
}
