#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int t=0;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin>>t;
	while(t--){
    int n;
	cin>>n;
	int x,y;
	cin>>x>>y;
	ll X=x,Y=y;
    for(int i=0;i<4*n-2;i++){
		cin>>x>>y;
		X^=x;
		Y^=y;
	}
	cout<<X<<" "<<Y;
	cout<<"\n";}

}
