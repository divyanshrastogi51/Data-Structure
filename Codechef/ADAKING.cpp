#include<bits/stdc++.h>
using namespace std;

#define loop(i,start,end) for(auto i=(start<end)?start:start-1;(start<end)?i<end:i>=end;(start<end)?i++:i--)
//#define line cout<<"\n";

typedef vector<vector<char>> vvc;

void modify(vvc& vec,int obs){
	for(int i=0;i<8,obs>0;i++)
		for(auto j=0;j<8;j++){
			if(!obs)
				break;
			vec[i][j]='.';
			obs--;
		}
	vec[0][0]='O';
}

void solution(){
	int n;
	cin>>n;
	vvc cb(8);
	loop(i,0,8)
		loop(j,0,8)
			cb[i].push_back('X');
	modify(cb,n);
	loop(i,0,8){
		loop(j,0,8)
			cout<<cb[i][j];
		cout<<"\n";
	}
}

int t=0;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	for(cin>>t;t--;solution());
}
