// Problem 27 || Remove Element
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> sol;
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]!=val){
                sol.push_back(nums[i]);
            }
        }
        for(int i=0;i<sol.size();i++){
            nums[i]=sol[i];
        }
        return sol.size();
    }
};