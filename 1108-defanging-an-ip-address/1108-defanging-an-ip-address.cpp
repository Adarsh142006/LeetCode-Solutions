class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        int index = 0;
        while(index<address.size()){
              if(address[index]=='.'){
                ans+="[.]";
              }else{
                ans+=address[index];
              }
              index++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna