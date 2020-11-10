/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//Write code here
	long long int n,t;
	scanf("%lld",&n);
	int* a = (int*) malloc(n*sizeof(long long int));
	int* b = (int*) malloc(n*sizeof(long long int));
	for(long long int i=0;i<n;i++)
		scanf("%lld",&a[i]);
	for(long long int i=0;i<n;i++)
		scanf("%lld",&b[i]);
	long long int min = b[0]/a[0];
	for(long long int i=0;i<n;i++)
	{
		t=b[i]/a[i];
		if(t<min)
			min = t;
	}
	printf("%lld",min);
}
