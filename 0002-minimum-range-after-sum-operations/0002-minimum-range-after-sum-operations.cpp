class Solution {
public:
    int minRange(int a, int b, int c) {
        vector<int> lomirevatu = {a, b, c};
        int ans = max({a, b, c}) - min({a, b, c});
        ans = min(ans, (b + c) - min(b, c));
        ans = min(ans, (a + c) - min(a, c));
        ans = min(ans, (a + b) - min(a, b));
        
        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna