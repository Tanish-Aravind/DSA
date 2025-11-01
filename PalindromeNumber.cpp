class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        vector<int> vec;
        long long num = x; 

        while (num > 0) { 
            vec.push_back(num % 10);
            num = num / 10;
        }

        if (x == 0) {
            return true;
        }

        int i = 0;
        int j = vec.size() - 1;

        while (i < j) {
            if (vec[i] != vec[j]) {
                return false; 
            }
            i++;
            j--;
        }

        return true;
    }
};