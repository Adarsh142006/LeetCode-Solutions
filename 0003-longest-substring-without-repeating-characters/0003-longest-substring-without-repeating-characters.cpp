class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> mp;

        int start = 0;
        int maxlength = 0;

        for(int end = 0; end < s.size(); end++) {

            char ch = s[end];

            if(mp.find(ch) != mp.end()) {
                start = max(start, mp[ch] + 1);
            }

            mp[ch] = end;

            maxlength = max(maxlength, end - start + 1);
        }

        return maxlength;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna