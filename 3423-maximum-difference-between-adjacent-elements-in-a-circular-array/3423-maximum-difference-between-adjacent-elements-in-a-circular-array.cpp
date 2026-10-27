class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int i = 0;
        int maxlen = 0;
        int len = 0;

        while(i<nums.size()-1){
            len = abs(nums[i]-nums[i+1]);
            if(len>maxlen){
                maxlen = len;
            }
            i++;
        }
         len = abs(nums[nums.size() - 1] - nums[0]);
        if(len > maxlen){
            maxlen = len;
        }
        return maxlen;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna