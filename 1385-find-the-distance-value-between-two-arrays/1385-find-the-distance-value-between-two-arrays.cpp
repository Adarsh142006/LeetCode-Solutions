class Solution {
public:

   int minsearch(int a, vector<int>&arr2){
        int start = 0;
        int min = 0;
        int end = arr2.size()-1;
        while(start<end){
            int mid = start + (end - start) / 2;
            if(arr2[mid]==a){
                return arr2[mid];
            }else if(arr2[mid]>a){
                end = mid;
            }else{
                start = mid+1;
            }
        }
        if (start > 0 && abs(arr2[start - 1] - a) < abs(arr2[start] - a)) {
            return arr2[start - 1];
        }
        return arr2[start];
   }

    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
         sort(arr2.begin(),arr2.end());
        int count = 0;
        int n = arr1.size();
        for(int i = 0;i<n;i++){
            int a = arr1[i];
            int value = minsearch(a,arr2);
            if(abs(arr1[i]-value)>d){
                count++;
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna