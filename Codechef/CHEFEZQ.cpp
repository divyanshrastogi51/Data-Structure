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

    ll n,k,car=0;
    cin>>n>>k;
    vi q(n);
    for(int i=0;i<q.size();i++)
        cin>>q[i];
	for(ll i=0;i<n;i++){
		q[i] += car;
		if(q[i]<k)
        {
            cout<<++i<<endl;
            return;
        }

		car = q[i]-k;
		q[i]-=k;
	}
	ll x = car/k;
	cout<<x+n+1<<endl;
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
