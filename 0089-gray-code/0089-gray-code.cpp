class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> gray(1<<n, 0);
        for(int i = 0; i < 1<<n; i++){
            gray[i] = i ^ (i >> 1);
        }
        return gray;
    }
};