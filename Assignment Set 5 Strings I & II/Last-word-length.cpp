#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int lengthOfLastWord(string s) {
        string lastWord = "";
        bool continued = false;
        int n = s.size();
        for(int i = 0;i<n;i++){
            if(s[i] != ' '){
                if(!continued){
                    lastWord = "";
                    continued = true;
                }
                lastWord +=s[i];
            }
            if(s[i] == ' '){
                continued = false;
            }
        }
        return lastWord.size();
    }
int main() {

	string s;
	getline(cin,s);
	cout<<lengthOfLastWord(s)<<endl;
	return 0;
}