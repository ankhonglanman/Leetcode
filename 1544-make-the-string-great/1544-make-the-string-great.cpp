class Solution {
private:
    inline bool isUpperLowerPair(char c1, char c2){
        return (abs(c1 - c2) == 32);
    }
public:
    string makeGood(string s) {
        string result;
        int sLen = s.size();
        for(int i = 0; i < sLen; i++){
            if(!result.empty() && isUpperLowerPair(result.back(), s.at(i))){
                result.pop_back();
            }
            else{
                result.push_back(s.at(i));
            }
        }
        return result;
    }
};