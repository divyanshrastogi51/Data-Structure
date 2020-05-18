#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int is_lap(string word){
    int mid = word.size()/2;
    int second_half_start, end_first_half=mid-1;
    if(word.size() % 2 == 0)
        second_half_start = mid;
    else
        second_half_start = mid+1;

    string first,second;
    int i;
    for(i=0; i<= end_first_half; i++)
    {
        first.push_back(word[i]);
        second.push_back(word[second_half_start]);
        second_half_start++;
    }

    sort(first.begin(), first.end());
    sort(second.begin(), second.end());
    for(i =0; i< first.size(); i++)
    {
        if(first[i] != second[i])
            return 0;
    }
    return 1;

}






int main() {
	// your code goes here
	int t;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>s;
	    if(is_lap(s))
        {
            cout<<"YES"<<endl;
	    }
	    else
            cout<<"NO"<<endl;
	}


	return 0;
}
