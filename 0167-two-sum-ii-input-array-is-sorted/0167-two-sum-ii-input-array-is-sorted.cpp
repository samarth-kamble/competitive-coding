class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size() - 1;
        int left = 0 ;
        int right = n;

        while (left < right) {
            int total = nums[left] + nums[right];

            if(total == target) {
                return {left + 1, right+1};
            } else if (total < target) {
                left++;
            } else {
                right--;
            }
        }

        return {-1,-2};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna