#include<stdio.h>
#include<stdlib.h>

int main(){
    long long int t,x,y,j,l,r,z,max=-1,ans=-1;
    scanf("%lld\n",&t);
    for(long long int i=0;i<t;i++){
            max=-1;ans=-1;
        scanf("%lld %lld %lld %lld",&x,&y,&l,&r);

        for(j=r;j>=r/2;j--){
            if((x&j)*(y&j)>max){
                max = (x&j)*(y&j) ;
                ans = j;
            }

        }

        printf("%lld\n",ans);

    }



}
