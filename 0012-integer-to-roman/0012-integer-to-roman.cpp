class Solution {
public:
    string intToRoman(int num) {
      vector<pair<int, string>> alphas = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, 
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, 
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };

       string ans = "";
       for(int i = 0;i<alphas.size();i++){
        int count = num/alphas[i].first;
        num-=count*alphas[i].first;
        while(count--){
            ans+=alphas[i].second;
        }
       }
       return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna