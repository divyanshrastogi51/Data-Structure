#include <stdio.h>
#include<stdlib.h>

int main() {

	long int t,n,q,f,d,c,p;
	scanf("%ld", &t);
	for(long int i=0;i<t;i++)
    {   p=0,c=0;
        scanf("%ld %ld", &n,&q);
        for(long int j=0;j<q;j++)
        {
            scanf("%ld %ld", &f,&d);
            if(p<f)
               {
                c=c+f-p;
                p=f;
               }
            if(p>f)
                {
                c=c+p-f;
                p=f;
                }

            if(d>f)
               {

                c=c+d-f;
                f=d;
               }
            if(d<f)
               {

                c=c+f-d;
                f=d;
               }
            p=d;
        }

            printf("%ld\n",c);


    }


	return 0;
}

