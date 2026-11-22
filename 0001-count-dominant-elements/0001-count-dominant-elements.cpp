class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        if(n==1){
            return 1;
        }
        for(int i = 0;i<n;i++){
            if(i==0){
                if(nums[i]>=nums[i+1]){
                    count ++;
                }
            }
               else if(i==n-1){
                     if(nums[i]>=nums[i-1]){
                    count ++;
                }
                }else{
                long long average = (nums[i-1]+nums[i+1]);
                if(2*nums[i]>=average){
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