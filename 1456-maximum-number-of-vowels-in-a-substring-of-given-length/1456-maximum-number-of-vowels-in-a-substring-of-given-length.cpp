class Solution {
public:

    bool isvowel(char c){
        return (c=='a') || (c=='e')|| (c=='i') || (c=='o') || (c=='u');
    }
    int maxVowels(string s, int k) {
        int i = 0;
        int j = 0;
        int count = 0,maxm = 0;
        int  n = s.size();
        while(j<k){
            if(isvowel(s[j])) count++;
            j++;
        }
        maxm = count;
        while(j<n){
            if(isvowel(s[i])) count--;
            i++;
            if(isvowel(s[j])) count++;
            j++;
            maxm = max(maxm,count);
        }
        return maxm;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna