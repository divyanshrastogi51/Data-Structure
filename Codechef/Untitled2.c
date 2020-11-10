/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
#include<stdlib.h>
#define RANGE 100000

void customSort(long long int arr[], long long int n)
{
	long long int freq[RANGE];

	// initialize array by 0
	memset(freq, 0, sizeof(freq));

	for (long long int i = 0; i < n; i++)
		freq[arr[i]]++;

	long long int k = 0;
	for (long long int i = 0; i < RANGE; i++)
	{
		while (freq[i]--)
			arr[k++] = i;
	}
}

int main()
{
	//Write code here
	long long  int n,t,count =0,p=0;
	 long long int a[100000],b[100000];
	scanf("%lld\n",&t);
	for(long long int j=0;j<t;j++)
    {       count =0;p=0;
            scanf("%lld\n",&n);

        for(long long int i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(long long int i=0;i<n;i++)
            scanf("%lld",&b[i]);
        customSort(a,n);
        customSort(b,n);

        for(long long int i=0;i<n;i++)
        {
            for(long long int k=i;k<n;k++)
            {
                if(a[k]>b[i])
                {
                    count++;
                    a[k]=-1;
                    break;
                }

            }

        }
        printf("%lld\n",count);
    }
}
