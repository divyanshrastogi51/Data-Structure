#include<bits/stdc++.h>
using namespace std;

#define loop(i,start,end) for(auto i=(start<end)?start:start-1;(start<end)?i<end:i>=end;(start<end)?i++:i--)

#define mod(a) (a)>0?(a):-1*(a)


typedef vector<int> v;
typedef long long ll;
void get(v& vec,int n){
	int t;
	for(auto i=0;i<n;i++){
		cin>>t;
		vec.push_back(t);
	}
}

ll skipCount(v vec){
	ll count=0;
	for(auto i=0;i<vec.size()-1;i++)
		count+=mod(vec[i+1]-vec[i]);
	return count-vec.size()+1;
}

void solution(){
	int n;
	cin>>n;
	v str;
	get(str,n);
	cout<<skipCount(str);
	cout<<"\n";
}

int _testCases_=0;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	for(cin>>_testCases_;_testCases_--;solution());
}
