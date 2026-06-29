class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> mpp;
        
        int n = nums.size(); 

        for (int i = 0 ; i < n  ; i++) {
            int complement = target - nums[i];

            if (mpp.count(complement)) {
                return {mpp[complement],i};
            }

            mpp[nums[i]] = i ;
        }

        return {};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna