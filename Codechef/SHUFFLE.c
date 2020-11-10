#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;


int main(){

    long int n,k;
    scanf("%d\n", &t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d", &n,&k);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        if(k==1){printf("yes\n");continue;}
        for(int k=0;k<n;k++)
        {
            for(int p=0;p<k;p++)
            {
                if(a[p]<a[p+k])
                    swap(a[p],a[p+k]);

            }
        }



    }

}
