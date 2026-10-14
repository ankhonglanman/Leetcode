class Solution {
public:
    int strStr(string haystack, string needle) {
        int res = -1;
        int end = haystack.size() - needle.size();
        int windowSize = needle.size();
        for(int i = 0; i <= end; i++){
            if(haystack.substr(i, windowSize) == needle){
                res = i;
                break;
            }
        }
        return res; 
    }
};