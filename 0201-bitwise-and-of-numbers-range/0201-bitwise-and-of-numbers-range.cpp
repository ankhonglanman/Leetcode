class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if (left == 0){
            return 0;
        }
        int res = 0;

        for(int i = 30; i >= 0; i--){
            int t1 = (left >> i)&1; 
            int t2 = (right >> i)&1;
            if(t1 == t2){
                if(t1 == 1) res ^= 1<<i;
            }
            else{
                break;
            }
        }

        return res;
    }
};