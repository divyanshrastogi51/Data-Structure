#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
     int t,a1,a2,a3,a4,a5,p;

    scanf("%d\n",&t);

    while(t--)
    {
        scanf("%d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&p);
        if((a1+a2+a3+a4+a5)*p <= 5*24)
            printf("No\n");
        else printf("Yes\n");

    }
}
