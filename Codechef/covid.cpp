#include <iostream>
#include <vector>
#include <algorithm>
#include<stdio.h>
using namespace std;


int main()
{
    int t,n,count,min,max,temp;
    int a[10],b[10];
    scanf("%d\n", &t);
    for(int i=0;i<t;i++)
    {
        count=0;
        scanf("%d\n", &n);
        for(int j=0;j<n;j++)
        {
            scanf("%d", &a[j]);
        }
        for(int k=0;k<n;k++)
        {
            count=0;
            for(int l=k;l<n-1;l++)
            {
                if(a[l+1]-a[l]<=2)
                    count++;
                else break;

            }
            for(int l=k;l>0;l--)
            {
                if(a[l]-a[l-1]<=2)
                    count++;
                else break;

            }
            b[k]=count+1;
        }

       sort(b,b+n,greater<int>());
        max = b[n-1];
        min = b[0];
        printf("%d %d\n",min,max);


    }

    return 0;
}
