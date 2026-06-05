
#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    bool isAlphaNum(char ch){
        if((ch>='0'&& ch<='9') ||(tolower(ch)>='a'&& tolower(ch)<='z') )  {
            return true;
        }    
        return false;    
    }
    bool isPalindrome(string s) {
        int st = 0;
        int e = s.length()-1;
        while(st<=e){

        if(!isAlphaNum(s[st])){
            st++; continue;
        }
        if(!isAlphaNum(s[e])){
            e--;continue;
        }

            if(tolower(s[st])!=tolower(s[e])){
                return false;
            }
            else{
                st++;
                e--;
            }
        }
        return true;
        
    }
};