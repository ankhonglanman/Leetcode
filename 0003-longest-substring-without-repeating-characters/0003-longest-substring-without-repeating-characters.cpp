class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int len = s.length();
        int l = 0;
        int maxLen = 0;
        std::unordered_map<char, int> map;  

        for(int r = 0; r < len; r++){
            if(map.count(s[r]) == 0){
                map.insert({s[r], r});
            }
            else{
                if(map[s[r]] >= l){

                    l = map[s[r]] + 1;
                }
                map[s[r]] = r;
            }
            if(r - l + 1 > maxLen){
                maxLen = r - l + 1;
            }
        }

        return maxLen;
    
    }
};