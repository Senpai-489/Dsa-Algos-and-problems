//problem 66 || Plus one
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag=1;
        int size=digits.size();
        if(digits[size-1]!=9){
            digits[size-1]=digits[size-1]+1;
            return digits;
        }
        for(int i=0;i<size;i++){
            if(digits[i]!=9){
                flag=0;
            }
        }
        if(flag==1){
            digits[0]=1;
            for(int i=1;i<size;i++){
                digits[i]=0;
            }
            digits.push_back(0);
            return digits;
        }
        for(int i=size-1;i>=0;i--){
            if(digits[i]!=9){
                digits[i]+=1;
                return digits;
            }
            else{
                digits[i]=0;
            }
        }
        return digits;
    }
};