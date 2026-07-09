class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long x = 0;
        for(char c : to_string(n)){
            if(c != '0'){
                int digit = c - '0';
                x = x * 10 + (c- '0');
                sum += digit;
            }
        }
        return x * sum;
    }
};