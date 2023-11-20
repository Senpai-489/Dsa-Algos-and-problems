//Problem 11 || Container_with_most_water

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int size=height.size();
        int maxWater=0,currentWater;
        int first=0,last=size-1;

        while(first<last){
            int a=height[first],b=height[last];
            
            int width=last-first;
            int height=min(a,b);
            currentWater=height*width;
            maxWater=max(maxWater,currentWater);
            if(a>b){
                last--;
            }
            else{
                first++;
            }
        }
        return maxWater;
    }
};