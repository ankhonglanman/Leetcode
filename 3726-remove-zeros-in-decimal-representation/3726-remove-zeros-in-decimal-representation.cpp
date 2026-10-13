class Solution {
public:
    long long removeZeros(long long n) {
        int exp = 0;
        long long ans = 0;
        while(n != 0){
            int lastDigit = n % 10;
            if(lastDigit != 0){
                ans += lastDigit * pow(10, exp++);
            }
            n /= 10;
        }
        return ans;
    }
};