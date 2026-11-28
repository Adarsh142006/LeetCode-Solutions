class Solution {
public:
   bool isvowel(char c){
        return (c=='a') || (c=='e')|| (c=='i') || (c=='o') || (c=='u');
    }
    int maxVowels(string s, int k) {
        int end = 0;
        int count = 0;
        int maxi = INT_MIN;
        for(int i = 0;i<=s.size()-k;i++){
            while(end-i<k&&end<s.size()){
               if(isvowel(s[end])){
                count++;
               }
               end++;
            }
            maxi = max(maxi,count);
            if(isvowel(s[i])){
                count--;
            }
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna