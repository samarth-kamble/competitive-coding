class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();

        int maxi = 0 ;
        int cnt = 0 ;

        for (int i = 0 ; i < n ; i++) {
            if(nums[i] == 1) {
                cnt++;
                maxi = max(maxi, cnt);
            }
            else 
                cnt = 0;
        }

        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna