#include <bits/stdc++.h>

using namespace std;


const int MAX_N = 1e5 + 5;
const int MAX_L = 20; // ~ Log N
const long long MOD = 1e9 + 7;
const long long INF = 1e9 + 7;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;




void solve() {

    int n;
    bool flag = 0;
	 cin>>n;
	int a[n+1][n+1];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
            cin>>a[i][j];

	int k=n,cnt=0;
	while(k!=0)
	{
		int i=k,j=1;
		if(flag)
            swap(a[i][j], a[j][i]);

		if(a[i][j]!= (i-1)*n+j) {
			flag = 1-flag;
			cnt+=1;
		}
		k-=1;
	}
	cout<<cnt<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    //  freopen("input.txt", "r", stdin);
    //  freopen("output.txt", "w", stdout);


    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        //cout << "Case #" << t  << ": ";
        solve();
    }
}
