class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int n = numbers.length;
        int right=1;
        int left = n-1;
        int res[] = new int[2];
        for(int i = 0 ; i < n ;i++){
            int sum = numbers[right-1] + numbers[left];

            if(sum == target) {
                res[0] = right;
                res[1] = left+1;
                return res;
            } else if (sum > target) {
                left--;
            } else {
                right++;
            }
        }
        return res;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna