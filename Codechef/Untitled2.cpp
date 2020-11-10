#include<stdio.h>
#include<algorithm>
#include<vector>
#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *a[])
{
	//Write code here
	int t;

	scanf("%d",&t);
	for(int i=0;i<t;i++){

		int N;
		std::vector<int> p;
		std::vector<int> op;
        scanf("%d",&N);


		for(int i=0;i<N;i++){
			int input;

			scanf("%d",&input);
			p.push_back(input);
		}
		for(int i=0;i<N;i++){
			int input;
            scanf("%d",&input);
            op.push_back(input);
		}


		std::sort(p.begin(),op.end());
		std::sort(op.begin(),p.end());

		int win_count=0;


		for(int i=0;i<N;i++){
			int minimum_number=0;
			int idx=-1;

			for(int j=0;j<p.size();j++){

				if(p[j]>op[i]){


					if(minimum_number==0){
						minimum_number=p[j];
						idx=j;
					}

					else if(p[j]<minimum_number){
						minimum_number=p[j];
						idx=j;
					}
				}

			}
			if(minimum_number!=0){
				p.erase(p.begin()+idx);
				win_count+=1;
			}
		}

		std::cout<<win_count<<"\n";
	}

}
