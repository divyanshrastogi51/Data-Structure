#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
	while(t--)
    {
        unsigned int count=0, max_speed = numeric_limits<int>::max(), cur_speed;
        cin >> n;
        for(int i=0;i<n;i++) {
			cin >> cur_speed;
			if(cur_speed <= max_speed) {
				max_speed = cur_speed;
				count++;
			}
		}
		cout << count << endl;

	}


}
