class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start = 0;
        int end = nums.size()-1;
        int count = 0;
        while(start<=end){
            if(nums[start] == val && nums[end] == val){
                end--;
                count++;
            }else if((nums[start]==val && nums[end]!= val)){
                swap(nums[start],nums[end]);
                start++;
                end--;
                count++;
            }else{
                if(nums[end]==val){
                    count++;
                    start++;
                end--;
                }else{start++;}  
            }
             
        }
        int ans = nums.size()-count;
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna