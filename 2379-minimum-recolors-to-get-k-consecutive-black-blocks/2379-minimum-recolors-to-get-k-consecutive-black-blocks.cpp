class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i = 0;
        int j = 0;
        int count = 0,minm = 0;
        int  n = blocks.size();
        while(j<k){
            if(blocks[j]=='W') count++;
            j++;
        }
        minm = count;
        while(j<n){
            if(blocks[i]=='W') count--;
            i++;
            if(blocks[j]=='W') count++;
            j++;
            minm = min(minm,count);
        }
        return minm;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna