#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){

    long int n,k,t,x;
    long int a[100000];
    scanf("%ld\n", &t);
    for(int i=0;i<t;i++)
    {
        scanf("%ld %ld", &n,&x);
        for(int j=0;j<n;j++)
        {
            scanf("%ld",&a[j]);
        }
        if(x==1){printf("yes\n");continue;}
        for(int k=0;k<n;k++)
        {
            for(int p=0;p<k;p++)
            {
                if(p+x<n)
                if(a[p]<a[p+k])
                    swap(a[p],a[p+k]);

            }
        }
         if (std::is_sorted(a, a + n))
          {
            printf("yes\n");
         }
         else printf("no\n");


    }

}
