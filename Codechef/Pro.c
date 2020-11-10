#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 10000
char a[N][N];

int randomYes()
{
    return 1+rand()%N;
}

int main()
{

    int i, j, kount=0;

    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            a[i][j] = randomYes() == 20;
            if (a[i][j])
                kount++;
        }
    }
    printf("Set entries = %d\n", kount);
    return 0;
}
