// Problem 58 || Length of last word
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size();
        int answer=0;
        for(int i=size;i>0;i--){
            if(s[i-1]==' '){
                size--;
            }
            else{
                break;
            }
        }
        for(int i=size;i>0;i--){
            
            if(s[i-1]==' '){
                break;
            }
            answer++;
        }
        return answer;
    }
};