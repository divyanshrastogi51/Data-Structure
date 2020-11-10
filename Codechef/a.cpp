


#include <iostream>
#include<string.h>
using namespace std;

int main(){
    char string1[10000];
    int i,t, length;
    int flag = 0;
    std::cin >> t;
   while(t--)
   {
       flag = 0;
    cin >> string1;
    length = strlen(string1);
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
}

    if (flag) {
        cout << string1 << "NO" << endl;
    }
    else {
        cout << string1 << "YES" << endl;
    }
   }
    return 0;
}
