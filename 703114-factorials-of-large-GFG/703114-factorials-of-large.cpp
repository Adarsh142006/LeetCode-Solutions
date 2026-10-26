class Solution {
  public:
    vector<int> factorial(int n) {
        vector<int>ans(1,1);
        while(n>1){
            int carry = 0;
            int res = 0;
            int size = ans.size();
            for(int i =0;i<size;i++){
                res = ans[i]*n+carry;
                 ans[i]=res%10;
                carry=res/10;
            }
            while(carry){
                ans.push_back(carry%10);
                carry/=10;
            }
            n--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna