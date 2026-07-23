class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 1 ; i < nums.size() ; i++){
            if(nums[i-1] > nums[i]) {
                count++;
            }
        }
        if(nums[n - 1] > nums[0])
            count++;

        return count <= 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna