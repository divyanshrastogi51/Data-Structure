#include <bits/stdc++.h>

using namespace std;

int main () {
	int t;
	scanf("%d\n",&t);
	while(t--) {
        long long ts;
        cin >> ts;


        while (ts % 2 == 0) {
            ts = ts >> 1;
        }

        cout << ts / 2 << "\n";



	}
}
