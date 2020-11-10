// c++ program to print the smallest
// integer with n factors or more
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000001;
int factor[MAX] = { 0 };
int a=0;
void generatePrimeFactors()
{
    factor[1] = 1;

    for (int i = 2; i < MAX; i++)
        factor[i] = i;

    for (int i = 4; i < MAX; i += 2)
        factor[i] = 2;

    for (int i = 3; i * i < MAX; i++)
    {

        if (factor[i] == i)
        {


            for (int j = i * i; j < MAX; j += i)
            {


                if (factor[j] == j)
                    factor[j] = i;
            }
        }
    }
}

// function to calculate number of factors
int calculateNoOFactors(int n)
{
    if (n == 1)
        return 1;

    int ans = 1;

    int dup = factor[n];
    int c = 1;
    int j = n / factor[n];

    while (j != 1)
    {

        if (factor[j] == dup)
            c += 1;

        else
        {
            dup = factor[j];
            ans = ans * (c + 1);
            c = 1;
        }


        j = j / factor[j];
    }


    ans = ans * (c + 1);

    return ans;
}

int smallest(int n)
{
    for (int i = 1;; i++)


        if (calculateNoOFactors(i) >= n)
            return i;
}
void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        a++;
        n = n/2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            a++;
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        a++;
}
// Driver program to test above function
int main()
{

    generatePrimeFactors();

    int n,t,k,p,q;
    for(int i=0;i<t;i++)
    {
         cin>> n >> k;
        p= smallest(n);

    }

    return 0;
}

