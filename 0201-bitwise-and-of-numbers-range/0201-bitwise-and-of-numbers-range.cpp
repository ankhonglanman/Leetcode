class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if (left == 0){
            return 0;
        }
        int res = 0;
        int numberOfBits = 30;
        for(; right >> numberOfBits == 0; numberOfBits--);
        numberOfBits++;

        for(int i = numberOfBits - 1; i >= 0; i--){
            int t1 = left >> i;
            int t2 = right >> i;
            if((t1&1) == 1 && (t2&1) == 1){
                res ^= 1<<i;
            }
            else if((t1&1) != (t2&1)){
                break;
            }
        }

        return res;
    }
};