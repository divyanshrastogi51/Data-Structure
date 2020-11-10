#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
	long int t,n,p,l;
	string a;
	scanf("%d\n",&t);
	for(long int i=0;i<t;i++)
        {
          p=0;
          getline(cin, a);
          l = a.length();
          for(int j = 0; j < l - 1; j++) {
			if(a[j] != a[j+1]) {
				p++;
				j++;
			}
		}


                printf("%ld\n",p);
            }








return 0;

}
