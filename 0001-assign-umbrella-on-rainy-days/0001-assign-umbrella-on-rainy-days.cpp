class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int a = 0; 
        int b = 0; 
        int n = rain.size();
        vector<string> answer;
        
        for (int i = 0; i < n; i++) {
            if (rain[i] == 1) {
                if (i + 1 < n && rain[i + 1] == 1) {
                    if (a <= b) {
                        answer.push_back("Alice");
                        a++;
                    } else {
                        answer.push_back("Bob");
                        b++;
                    }
                } else {
                    answer.push_back("Bob");
                    b++;
                }
            } else {
                answer.push_back("None");
            }
        }
        
        return answer;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna