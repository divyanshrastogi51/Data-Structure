#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main () {
    int t;
	scanf("%d\n",&t);
	while(t--) {
        int n;
		cin >> n;
			long long tp = 1;
		for(int r = 0; r < n + 1 / 2; r += 2) {
			for(int c = 0; c < n; c++) {
				cout << tp++ << " ";
			} cout << endl;

			if(r < n - 1) {
				for(int c = 0; c < n; c++) {
					if(n % 2) {
						cout << tp++ << " ";
					} else {
						cout << tp + n - c - 1 << " ";
						if(c == n - 1) {
							tp += n;
						}
					}
				} cout << endl;
			}
		}
	}
	return 0;
}
