#include <iostream>
using namespace std;
 
int main()
{
    string str, rev="";
    cin >> str;

    for(int i=str.length()-1; i>=0; i--){
        if(str[i]>=65 && str[i]<=90)
            str[i] = str[i]+32;
            
        rev +=str[i];
    }
    

    if(rev == str)
        cout << 1;
    else
        cout << 0;
        
    return 0;
}