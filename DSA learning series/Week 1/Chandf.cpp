#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    long int t,x,y,j,l,r,z,m=-1,ans=-1,p;
    scanf("%ld\n",&t);
    for(long int i=0;i<t;i++){
            m=-1;ans=-1;
        scanf("%ld %ld %ld %ld",&x,&y,&l,&r);
        p = x|y ;
        //if(p<=r && p>=l)
            printf("%d\n",p);


        /*for(j=r;j>=r/2;j--){
            if((x&j)*(y&j)>max){
                max = (x&j)*(y&j) ;
                ans = j;
            }

        }

        printf("%lld\n",ans);*/

    }
}
