#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool lemonadeChange(std::vector<int>& bills) {
        int fiveCount = 0;
        int tenCount = 0;

        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                fiveCount++;
            } else if (bills[i] == 10) {
                if (fiveCount > 0) {
                    fiveCount--;
                    tenCount++;
                } else {
                    return false;
                }
            } else if (bills[i] == 20) {
                if (tenCount > 0 && fiveCount > 0) {
                    tenCount--;
                    fiveCount--;
                } else if (fiveCount >= 3) {
                    fiveCount -= 3;
                } else {
                    return false;
                }
            }
        }
        
        return true;
    }
};
