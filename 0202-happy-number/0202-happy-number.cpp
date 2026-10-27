class Solution {
public:
   int getNextNumber(int n){
    int a = 0;
    while(n){
        int r = n%10;
        a+=r*r;
        n/=10;
    }
    return a;
   }

    bool isHappy(int n) {
        unordered_set<int>s;
        while(s.find(n)==s.end()){
            s.insert(n);
            n=getNextNumber(n);
            if(n==1) return true;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna