class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int i = 0;
        int j = 0;
        int count = 0;
        string s = to_string(num);
        int n = s.length();
        long long window = 0;
        long long mod = pow(10, k - 1);
        while(j<k){
          window = window*10+s[j]-'0';
          j++;
        }
        if (window != 0 && num % window == 0) {
                count++;
        }
         while(j < n){
            window = window % mod;
            window = window * 10 + (s[j] - '0');
            
            if (window != 0 && num % window == 0) {
                count++;
            }
            
            i++;
            j++;
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna