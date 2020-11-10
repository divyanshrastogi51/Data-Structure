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


int fight(const vi &fam);

void solve() {
    int n, k , temp;
    cin >> n >> k;
    int inefficiency = k;
    vi fam(n);
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        fam[i] = temp - 1;
    }
    vi fam_hash(100, 0);
    for (int i = 0; i < n; i++)
    {
        fam_hash[fam[i]] += 1;
        int inefficieny_1 = fight(fam_hash);
        if (inefficieny_1 >= k)
        {
            fam_hash[fam[i]] -= 1;
            inefficiency = inefficiency + k +  fight(fam_hash);
            fill(fam_hash.begin(), fam_hash.end(), 0);
            fam_hash[fam[i]] += 1;
        }
    }

    cout << inefficiency + fight(fam_hash) << endl;

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

int fight(const vector<int> &fam) {
    int inefficiency = 0;

    for (int i = 0; i < fam.size(); i++) {
        if (fam[i] > 1) {
            inefficiency += fam[i];
        }
    }

    return inefficiency;
}
