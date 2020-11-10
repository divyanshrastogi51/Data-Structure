#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;


int T;
void solution()
{
    long long int N, M, X, Y,dif , sum = 0;
        cin >> N >> M >> X >> Y;
        long long int arr[N][M];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                arr[i][j] = 0;
            }
        }
        if (Y < X)
        {
            dif = X - Y;
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    if ((i + j) % 2 == 0)
                        sum += dif;
                    else
                        sum += 0;
                }
            }
        }
        else
        {
            dif = Y - X;
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    if ((i + j) % 2 == 0)
                        sum = sum + X;
                    else
                        sum = sum + dif;
                }
            }
        }

        cout << sum << endl;
}

int main()
{
    fastIO();
    T = 1;
    cin >> T;
    for(int i = 1; i < T+1; ++i)
    {
        solution();
    }
    return 0;
}
