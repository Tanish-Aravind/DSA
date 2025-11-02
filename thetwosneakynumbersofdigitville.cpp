class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        
        vector<int> ans;
        if (nums.empty()) {
            return ans; 
        }
        int max = nums[0]; 
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
            if (nums[i] < 0) {
                return ans; 
            }
        }
        vector<int> hash(max + 1, 0);
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }
        for (int i = 0; i <= max; i++) {
            if (hash[i] == 2) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};