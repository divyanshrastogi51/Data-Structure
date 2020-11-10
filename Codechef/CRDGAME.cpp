#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll sumofdigits(int n)
{
    if(n==0)
        return 0;
    return (n%10+sumofdigits(n/10));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,a,b,chef=0,morty=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            if (a>9)
            {a=sumofdigits(a);}
            if(b>9)
            {b=sumofdigits(b);}

            if(a<b)
                morty+=1;
            else if(a>b)
                chef+=1;
            else
            { morty+=1;
              chef+=1;
            }

        }
        if(chef>morty)
            {
                cout<<'0'<<" "<<chef<<"\n";
            }
        if(morty>chef)
            {
                cout<<'1'<<" "<<morty<<"\n";
            }
        else if(chef==morty)
        {
            cout<<'2'<<" "<<chef<<"\n";
        }

    }
    return 0;
}
