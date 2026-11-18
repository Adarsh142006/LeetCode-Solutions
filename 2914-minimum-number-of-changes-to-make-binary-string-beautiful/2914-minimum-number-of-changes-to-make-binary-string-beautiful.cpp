class Solution {
public:
    int minChanges(string s) {
        int i = 0;
        int j = 1;
        int count = 0;
        int n = s.size();
        while(j<n){
            if(s[i]!=s[j]){
                s[j]=s[i];
                count++;
            }
            j+=2;
                i=j-1;
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna