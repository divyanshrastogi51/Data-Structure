#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

#define MAX 100005
int main()
{
     int t,N,score,type,inp;
    char inpStr[MAX];

    cin>>t;

    while(t--)
    {
        cin>>N;
        scanf("%s",inpStr);

        if(strcmp(inpStr,"INDIAN")==0)
            type=1;
        else
            type=2;

        score=0;

        while(N--)
        {
            scanf("%s",inpStr);

            if(strcmp(inpStr,"CONTEST_WON")==0)
            {
                score+=300;

                cin>>inp;

                if(inp<20)
                    score+=20-inp;
            }

            else if(strcmp(inpStr,"TOP_CONTRIBUTOR")==0)
            {
                score+=300;

            }

            else if(strcmp(inpStr,"BUG_FOUND")==0)
            {
                cin>>inp;
                    score+=inp;
            }

            else
            {
                score+=50;
            }
        }

        printf("%d\n",(score/(200*type)) );
    }

    return 0;
}
