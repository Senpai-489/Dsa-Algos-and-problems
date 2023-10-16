//problem 125 || Valid_Palindrome;
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
       string ew,rev;

        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                char ch;
                ch=tolower(s[i]);
                ew.push_back(ch);
            }
        } 
        int n =ew.size();
         for(int i=0;i<n;i++){
            rev.push_back(ew[(n-1)-i]);
        }
        if(ew==rev){
            return true;
        }
        else{return false;}
    }
};