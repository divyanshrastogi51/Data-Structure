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




bool solve() {
    ll n,k,x,y;
    cin>>n>>k>>x>>y;
	map<ll,bool> a;
	while(x!=y)
    {
		if(a[x])
		 return 0;
		a[x]=1;
		x = (x+k)%n;
	}
	return 1;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    //  freopen("input.txt", "r", stdin);
    //  freopen("output.txt", "w", stdout);


    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        //cout << "Case #" << t  << ": ";
        cout<<(solve()?"YES":"NO")<<endl;
    }
}
