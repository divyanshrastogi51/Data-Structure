
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

    ll n;
    cin>>n;
	if(n==3)
    {
		cout<<2<<endl;
		return;

	}
	ll tmp=n*(n+1)/4;
	map<pair<ll,ll>,bool> map_1;
	for(ll i=1;i<=n;i++)
		for(ll j=i+1;j<=n;j++)
			for(ll m=i;m<j;m++)
				if(m*(m+1)/2 + j-i == tmp)
				{
					map_1[{i,j}] = 1;
				}



	cout<<map_1.size()<<endl;
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
