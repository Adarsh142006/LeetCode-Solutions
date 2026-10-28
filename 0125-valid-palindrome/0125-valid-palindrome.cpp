class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(int i = 0;i<s.size();i++){
            if ((s[i] >= 'a' && s[i] <= 'z') ||
    (s[i] >= 'A' && s[i] <= 'Z')||
    (s[i]>='0'&& s[i]<='9')) {
        s[i] = tolower(s[i]);
         ans.push_back(s[i]);
}
        }
        int start = 0;
        int end = ans.size()-1;
        while(start<end){
            if(ans[start]==ans[end]){
                start++;
                end--;
            }else{
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna