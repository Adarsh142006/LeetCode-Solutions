class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        long long sum = 0,ans = 0;
        unordered_map<int,int>mp;
        while(j<k){
            sum+=nums[j];
            mp[nums[j]]++;
            j++;
        }
        if(mp.size()==k) ans = sum;
        while(j<n){
            sum-=nums[i];
            mp[nums[i]]--;
            if(mp[nums[i]] == 0) mp.erase(nums[i]);
            i++;
            sum+=nums[j];
            mp[nums[j]]++;
            j++;
            if(mp.size()==k) ans=max(ans,sum);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna