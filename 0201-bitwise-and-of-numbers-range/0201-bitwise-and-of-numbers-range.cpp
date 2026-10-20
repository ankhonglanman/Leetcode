class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if (left == 0){
            return 0;
        }
        int res = 0;

        for(int i = 30; i >= 0 && ((left >> i)&1) == ((right >> i)&1); i--){
            if((left >> i)&1 == 1){
                res ^= 1<<i;
            }
        }

        return res;
    }
};