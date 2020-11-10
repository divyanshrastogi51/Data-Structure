#include <iostream>
#include <vector>
#include <algorithm>
#include<stdio.h>
using namespace std;


int main(){

    long long int t,n,m;
    long long int sum;
    long long int a[100001];
    scanf("%lld", &t);
    for(long long int i=0;i<t;i++)
    {
        sum=0;
        scanf("%lld", &n);
        for(long long int j=0; j<n; j++)
            scanf("%lld", &a[j]);
        sort(a,a+n,greater<long long int>());
        for(long long int k=0;k<n;k++)
        {   if(a[k]-k<0 || a[k]==0)
            sum=(sum)%1000000007;
            else
                sum=(sum+a[k]-k)%1000000007;
        }
        printf("%lld\n", sum);
    }

}
