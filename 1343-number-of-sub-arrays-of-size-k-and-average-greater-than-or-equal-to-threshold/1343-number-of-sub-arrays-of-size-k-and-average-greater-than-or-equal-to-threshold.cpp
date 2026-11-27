class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int end = 0;
        long long sum = 0;
        int avg = 0;
        int count = 0;
        for(int i = 0;i<=arr.size()-k;i++){
            while(end-i<k&&end<arr.size()){
                sum = sum+arr[end];
                end++;
            } 
            avg = sum/k;
            sum = sum-arr[i];
             if(avg>=threshold){
                count++;
        }
            }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna