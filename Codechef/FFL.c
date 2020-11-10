
#include<stdio.h>
#include<stdlib.h>


int main(){

    int t,n,s,p;
    int sum,m1,m2;
    int a[1000],b[1000];
    scanf("%d\n", &t);
    for(int i=0;i<t;i++)
    {   sum=0;m1=1000,m2=1000;
        scanf("%d %d\n", &n,&s);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[j]);
        }
        p = 100-s;

        for(int k=0;k<n;k++)
        {
            if(b[k]==0){
               if(a[k]<m1)
                    m1=a[k];

            }
            else
            {
                if(a[k]<m2)
                    m2=a[k];
            }
        }
        sum=m1+m2;
        if(sum<=p)
            printf("yes\n");
        else printf("no\n");
    }
return 0;
}
