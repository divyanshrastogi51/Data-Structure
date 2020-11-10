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


vector<ll> prime;
void create_prime()
{
    prime.push_back(2);
    for(ll i=3;i<2000000;i++)
    {   ll flag=0;
        for(ll j=0;prime[j]*prime[j]<=i;j++)
        {
            if(i%prime[j]==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        prime.push_back(i);
    }
}

void solve() {
    ll n;
    cin>>n;
    int a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[n]={0};
    ll k=0;
    for(ll i=0;i<n;i++)
    {
        if(b[a[i]-1]==0)
        {
            b[a[i]-1]=prime[k];
            k++;
        }
    }
    for(ll i=0;i<n;i++)
    {
        cout<<b[a[i]-1]<<" ";
    }

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

