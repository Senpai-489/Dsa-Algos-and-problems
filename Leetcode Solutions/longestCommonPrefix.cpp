// Problem 14 || Longest Common Prefix
#include <iostream> 
#include <vector>
using namespace std;

class Solution {
public:
    std::string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1){
            return strs[0];
        }
        if (strs.empty()) {
            return "";
        }

        string ans = strs[0];
        for (int i = 0; i < strs.size(); i++) {
            for (int j = 0; j < ans.size(); j++) {
                if (strs[i][j] != ans[j]) {
                    ans.resize(j);
                    break;
                }
            }
        }
        return ans;
    }
};
