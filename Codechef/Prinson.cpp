#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	long int t,n,p,sum;
	int a[10010];
	scanf("%d\n",&t);
	for(int i=0;i<t;i++){
	    sum = 0;
	    scanf("%d %d\n",&n,&p);
	    for(int j =0;j<n;j++){
	        scanf("%d",&a[j]); }
	     for(int j=0;j<n;j++){
	         if(a[j]>p)
	            sum=sum+a[j]-p;}
	      printf("%d\n",sum);




	}


	return 0;
}
