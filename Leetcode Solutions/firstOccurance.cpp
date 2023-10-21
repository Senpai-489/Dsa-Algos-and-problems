#include <iostream>
#include <string>

class Solution {
public:
    int strStr(string haystack, string needle) {
        int index_1 = haystack.find(needle);
        if(index_1==string::npos){
            return -1;
        }
        else{
            return index_1;
        }
    }
};