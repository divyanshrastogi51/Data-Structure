#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    long long int t,a[100010],b[100010],p,n,sum1,sum2;

    scanf("%d\n",&t);

    while(t--)
    {
        p=0;sum1=0;sum2=0;
        scanf("%ld\n",&n);
        for(long int i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        for(long int i=0;i<n;i++)
        {
            scanf("%ld",&b[i]);
        }
        for(long int i=0;i<n;i++)
        {
            sum1+=a[i];
            sum2+=b[i];
            if(sum1==sum2 && a[i]==b[i])
                p+=a[i];
        }
        printf("%ld\n",p);
    }
}
