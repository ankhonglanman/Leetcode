class Solution {
public:
    int findComplement(int num) {
        int MSB = 30;
        for(; MSB >= 1;MSB--){
            if((num>>MSB)&1) break;
        }
        int numBits = MSB + 1;
        return (INT_MAX>>(31 - numBits)^num);
    }
};