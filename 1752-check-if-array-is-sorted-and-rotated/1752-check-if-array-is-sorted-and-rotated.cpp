class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0 ;
        for (int i = 1 ; i < n; i++){
            if(nums[i - 1] > nums[i]) {
                cnt++;
            }
        }

        if(nums[n-1] > nums[0]){
            cnt++;
        }
        return cnt<=1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna