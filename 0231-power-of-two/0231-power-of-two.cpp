class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 1) return false;
        for(int i = 30; i >= 0; i--){
            if((n - (1<<i)) == 0) return true;
        }
        return false;
    }
};