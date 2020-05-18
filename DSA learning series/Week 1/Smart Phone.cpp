#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
ll data[500000];

int main() {
  int n;
  ll maxProfit=0;
  scanf("%d",&n);
  for(int i=0; i<n; i++) {
    scanf("%lld",&data[i]);
  }
  sort(data, data+n);

  for(int i=0; i<n; i++) {
    maxProfit=max(maxProfit, (n-i)*data[i]);
  }

  cout << maxProfit << endl;

  return 0;
}
