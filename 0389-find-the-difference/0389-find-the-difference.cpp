class Solution {
public:
    char findTheDifference(string s, string t) {
        char res = 0;
        for(const auto& c : s){
            res ^= c;
        }
        for(const auto& c : t){
            res ^= c;
        }
        return res;
    }
};