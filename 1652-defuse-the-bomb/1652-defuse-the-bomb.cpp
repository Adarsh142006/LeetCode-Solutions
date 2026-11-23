class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n  = code.size();
        vector<int>ans(n,0);
        if(k==0) return ans;
        int i = 0;
        int j = 0;
        if(k<0){
            i=n+k;
            j=n-1;
        }
        else{
            i=1;
            j=k;        
    }
    int sum = 0;
    for(int x = i;x<=j;x++){
        sum+=code[x%n];
    }
    for(int index = 0;index<n;index++){
        ans[index]  = sum;
        sum-=code[i%n];
        i++;
        j++;
        sum+=code[j%n];
    }
    return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna