//problem 17 || Letter Combinations of a phone number
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
   private:
   void solve(string digit,vector<string>&out,string ans,int i,string map[]){
       if(i>=digit.length()){
           out.push_back(ans);
           return;
       }
       int num = digit[i]-'0';
       string val = map[num];
       for(int j=0;j<val.length();j++){
           ans.push_back(val[j]);
           solve(digit,out,ans,i+1,map);
           ans.pop_back();
       }
   } 
public:
    vector<string> letterCombinations(string digits) {
        vector<string> out;
        if(digits.length()==-0){
            return out;
        }
        
        string tAns = "";
        int i=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,out,tAns,i,mapping);
        return out;

    }
};