class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1 ; 

        for (int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] == 0) {
                j = i ;
                break;
            }
        }
        if (j == -1) return;
        for (int i =  j + 1 ; i < nums.size() ; i++) {
            if(nums[i] != 0) {
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna