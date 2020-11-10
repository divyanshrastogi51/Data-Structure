#include<stdio.h>
#include<stdlib.h>
#define RANGE 100

void customSort(int arr[], int n)
{
	int freq[RANGE];

	// initialize array by 0
	memset(freq, 0, sizeof(freq));

	for (int i = 0; i < n; i++)
		freq[arr[i]]++;

	int k = 0;
	for (int i = 0; i < RANGE; i++)
	{
		while (freq[i]--)
			arr[k++] = i;
	}
}
int main()
{
    int t,n,count,min,max,temp;
    int a[10],b[10];
    scanf("%d\n", &t);
    for(int i=0;i<t;i++)
    {
        scanf("%d\n", &n);
        for(int j=0;j<n;j++)
        {
            scanf("%d", &a[j]);
        }
        for(int k=0;k<n;k++)
        {
            count=0;
            for(int l=k;l<n-1;l++)
            {
                if(a[l+1]-a[l]<=2)
                    count++;
                else break;

            }
            for(int l=k;l>0;l--)
            {
                if(a[l]-a[l-1]<=2)
                    count++;
                else break;

            }
            b[k]=count+1;
        }

        customSort(b, n);
        max = b[n-1];
        min = b[0];
        printf("%d %d\n",min,max);

    }

    return 0;
}
