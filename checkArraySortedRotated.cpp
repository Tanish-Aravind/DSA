#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int flag1 = 0;
        int flag2 = 0;
        int index = n;

        for (int i = 1; i < n; i++) {
            if (nums[i] >= nums[i-1]) {
                continue;
            } else {
                flag1 = 1;
                index = i;
                break;
            }
        }

        for (int i = index; i + 1 < n; i++) {
            if (nums[i] <= nums[i+1]) {
                continue;
            } else {
                flag2 = 1;
                break;
            }
        }

        if (flag2 == 1) {
            return false;
        }

        if (flag1 == 0) {
            return true;
        }

        return nums[n-1] <= nums[0];
    }
};