class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>resu(n,-1);
        int windowsize = 2*k+1;
        int i = 0;
        int j = 0;
        long long sum = 0;
        if(windowsize>n) return resu;
        while(j<windowsize){
            sum+=nums[j];
            j++;
        }
        resu[k] = sum/windowsize;
        while(j<n){
              sum-=nums[i];
              i++;
              sum+=nums[j];
              j++;
              resu[k+i] = sum/windowsize;
        }
        return resu;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna