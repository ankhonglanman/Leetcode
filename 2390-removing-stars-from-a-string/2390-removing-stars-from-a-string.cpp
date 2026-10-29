class Solution {
private: 
    inline bool isLetter(char ch){
        return ch >= 'a' && ch <= 'z';
    }
public:
    string removeStars(string s) {
        string seen = "";
        seen.reserve(s.size());
        for(const auto& ch : s){
            if(isLetter(ch)){
                seen.push_back(ch);
            }
            else{
                seen.pop_back();
            }
        }

        return seen;
    }
};