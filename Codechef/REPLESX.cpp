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


ll findIndex(ll a[], ll n, ll x, ll p) {
    int min = 100000000, min_=-1;
    for(ll i=0;i<n;i++)
    {
        if(a[i] == x)
        {
            if(abs(p-i) < min)
            {
                min = abs(p-i);
                min_ = i;
            }
        }
    }
    return min_;
}

void solve() {
ll n, x, p, k,count = 0;
    cin >> n >> x >> p >> k;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin >> a[i];
    sort(a, a+n);
    ll index = findIndex(a, n, x, p);
    if(a[index] != x)
    {
        a[k-1] = x;
        sort(a, a+n);
        count++;
    }
    if(a[p-1] == x)
    {
        cout << 0+count;
        return;
    }
    if(p < k && a[p-1] < x)
    {
        cout << -1;
        return;
    }
    if(p > k && a[p-1] > x)
    {
        cout << -1;
        return;
    }
    index = findIndex(a, n, x, p)+1;
    cout << abs(p-index)+count;
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
        cout<<"\n";
    }
}
