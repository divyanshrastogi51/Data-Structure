#include <iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
bool comp(int a, int b)
{

// swap not needed
if((a > 0 && b > 0) ||
   (a < 0 && b < 0) ||
   (a > 0 && b < 0 ))
return false;

// swap needed
if(a < 0 && b > 0)
return true;

// swap not needed
if((a == 0 && b < 0) ||
   (a > 0 && b == 0))
return false;

// swap needed
if((a == 0 && b > 0) ||
   (a < 0 && b == 0))
return true;

}

void rearrange(int arr[], int n)
{
    sort(arr, arr + n, comp);
}

int main() {
	int a[100000],i;
	for(i=0;i<100000;i++)
	  {
        scanf("%d", &a[i]);
	    if(a[i]==42)
	        break;
	  }
	  int n = sizeof(a) / sizeof(a[0]);
    rearrange(a, i);
	 for(int j=0;j<i;j++)
	    printf("%d\n", a[j]);
	return 0;
}

