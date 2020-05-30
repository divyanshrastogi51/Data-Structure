#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        ll s[n],p[n],v[n];
        for(ll i=0;i<n;i++)
        {
            cin>>s[i]>>p[i]>>v[i];
            s[i]++;
        }

        for(ll i=0;i<n;i++)
        {
            ans=max(ans,(p[i]/s[i])*v[i]);
        }
        cout<<ans<<endl;

    }
    return 0;
}
