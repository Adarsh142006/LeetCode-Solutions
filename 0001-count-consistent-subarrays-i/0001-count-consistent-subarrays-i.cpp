class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int curr_and = nums[i];
            int curr_min = nums[i];
            
            for (int j = i; j < n; j++) {
                curr_and = curr_and & nums[j];
                curr_min = min(curr_min, nums[j]);
                
                if (curr_and == curr_min) {
                    count++;
                }
            }
        }
        return count;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna