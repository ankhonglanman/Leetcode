class Solution {
public:
    int hammingDistance(int x, int y) {
        int hammDis = 0;
        for(int i = 30; i >= 0; i--){
            if(((x >> i)&1) != ((y >> i )&1)){
                hammDis++;
            }
        }
        return hammDis;
    }
};