class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i = 0;
        int j = 0;
        int sum = 0;
        int n = arr.size();
        int count = 0;
        while(j<k){
            sum+=arr[j];
            j++;
        }
        if (sum >= k*threshold ) {
            count++;
        }
        while(j<n){
            sum -= arr[i];
            i++;
            sum +=arr[j];
            j++;
             if (sum >= k*threshold) {
            count++;
        }
        }
       
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna