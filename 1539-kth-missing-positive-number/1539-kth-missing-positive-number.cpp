class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start = 0;
        int end = arr.size();
        int mid;
        while(start<end){
            mid=start+(end-start)/2;
            if(arr[mid]-1-mid<k){
                start=mid+1;
            }else{
                end=mid;
            }
        }
        return start+k;
    }
};
 /*Total numbers − Array mein present numbers = Missing numbers
li question me karna kyahai ki min kaam if mai hai phele hum total no count karenge mid tak kitne hai then or uske baad ye pata karenge ki kuch usme se present bi hai to to ye pata karna hai ki present count pata karenge ten total count me se present count - kar denge to aa jaye ga*/

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna