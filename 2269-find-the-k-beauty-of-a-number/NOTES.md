this is a decent approach but this one 
class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int j = 0;
        int count = 0;
        string s = to_string(num);
        int n = s.length();
        long long window = 0;
        long long mod = round(pow(10, k - 1));

        while (j < n) {
            // 1. Right se naya digit jodo
            window = window * 10 + (s[j] - '0');

            // 2. Jab pehli baar window size k ke barabar ho jaye (j >= k - 1)
            if (j >= k - 1) {
                // Sirf EK baar check likhna padega!
                if (window != 0 && num % window == 0) {
                    count++;
                }
                // Agle step ke liye left wala digit hata do
                window = window % mod;
            }
            j++;
        }
        return count;
    }
};
