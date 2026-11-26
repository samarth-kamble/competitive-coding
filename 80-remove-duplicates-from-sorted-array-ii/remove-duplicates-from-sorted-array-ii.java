class Solution {
    public int removeDuplicates(int[] nums) {
        int n = nums.length;
        if(n <= 2) {
            return n;
        }  

        int j = 2 ;
        for(int i = 2 ; i < n ; i++){
            if(nums[i] != nums[j-2]) {
                nums[j] = nums[i];
                j++;
            }
        }

        return j;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna