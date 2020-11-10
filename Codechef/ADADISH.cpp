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
    ll solution,n;
    cin>>n;
    vector<ll> arr(n+1);
    for (ll i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr.begin(), arr.end(),greater<int>());
    if (n==1 || n==2){
      solution=arr[0];
    }
    else if (n==3){
      solution=max(arr[0],arr[1]+arr[2]);
    }
    else{
      ll res=MAX_N;
      res=min(res,max(arr[0],arr[1]+arr[2]+arr[3]));
      res=min(res,max(arr[0]+arr[2],arr[1]+arr[3]));
      res=min(res,max(arr[0]+arr[1],arr[2]+arr[3]));
      res=min(res,max(arr[0]+arr[3],arr[1]+arr[2]));
      res=min(res,max(arr[0]+arr[2]+arr[3],arr[1]));
      solution=res;
    }
    cout<<solution<<endl;

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
