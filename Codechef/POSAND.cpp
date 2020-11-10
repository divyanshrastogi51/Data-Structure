#include <bits/stdc++.h>

using namespace std;


const int MAX_N = 1e5 + 5;
const int MAX_L = 20; // ~ Log N
const long long MOD = 1e9 + 7;
const long long INF = 1e9 + 7;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;


int power(int p)
{
    return p != 0 && ((p & (p - 1)) == 0);
}

void solve() {

        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;

        }
        else if (n == 3)
        {
            cout << 1 << " " << 3 << " " << 2 << endl;

        }
        else if (n == 5)
        {
            cout << 2 << " " << 3 << " " << 1 << " " << 5 << " " << 4 << endl;

        }
        else if (power(n))
        {
            cout << -1 << endl;

        }
        else
        {
            cout << 2 << " " << 3 << " " << 1 << " " << 5 << " " << 4 << endl;
            int i = 6;
            while (i <= n)
            {
                if (power(i))
                {
                    cout << i + 1 << " " << i << " ";
                    i += 2;
                }
                else
                {
                    cout << i << " ";
                    i++;
                }
            }
            cout << endl;
        }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    //  freopen("input.txt", "r", stdin);
    //  freopen("output.txt", "w", stdout);


    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        //cout << "Case #" << t  << ": ";
        solve();
    }
}
