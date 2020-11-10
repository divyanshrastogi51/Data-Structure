#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, x, d = 0;
        cin >> n >> x;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        vector<ll>::iterator it = lower_bound(a.begin(), a.end(), x);
        ll lb = it - a.begin();

        for(int i=lb; i<n; i++)
        {
            if(x<a[i]){
                while(x<a[i])
                {
                    x = 2*x;
                    d++;
                }
                d++;
            }
            else
               {

               d++;}
            x = 2*a[i];
        }
        ll total = lb + d;
        if(lb != 0)
        {
            d = 0;
            lb--;
            for(int i=lb; i<n; i++)
            {
                if(x < a[i])
                {
                    while(x<a[i])
                    {
                        x = 2*x;
                        d++;
                    }
                    d++;
                }
                else
                    d++;
                x = 2*a[i];
            }
            if(d+lb<total)
                cout << d+lb << endl;
            else
                cout << total << endl;
        }
        else
            cout << total << endl;
    }
    return 0;
}
