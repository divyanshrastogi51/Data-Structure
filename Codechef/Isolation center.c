#include<stdio.h>
#include<stdlib.h>


int main()
{
    int c = 0, x;
    long int t,n,q,a[100000],sum=0,q1;
    char s[100000];
    scanf("%ld", &t);
    for(int i=0;i<t;i++)
    {
        scanf("%ld %ld\n", &n,&q);
        scanf("%s\n",s);
        int count[26]= {0};c = 0;
        while (s[c] != '\0')
        {
              if (s[c] >= 'a' && s[c] <= 'z') {
                 x = s[c] - 'a';
                 count[x]++;
              }

              c++;
        }

        for(long int j=0;j<q;j++)
        {
            sum=0;
            scanf("%ld",&q1);
            for(int p=0;p<26;p++)
            {
                if(count[p]>q1)
                    sum=sum+count[p]-q1;
            }
            printf("%ld\n",sum);



        }
    }

}
