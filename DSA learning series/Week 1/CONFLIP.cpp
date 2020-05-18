

#include <iostream>
#include<stdio.h>
using namespace std;

int main(){

    int t;
    scanf("%d\n",&t);
    int G = 0, I = 0, Q = 0;
    unsigned int N = 0;

    while(t--){
        scanf("%d\n",&G);
        while(G--){
            scanf("%d %d %d", &I , &N , &Q);
            if( N%2 == 1 && I != Q)
                {
                    printf("%d\n",(N+1)/2);
                }
            else
                {
                    printf("%d\n",N/2);
                }
        }
    }
    return 0;
}
