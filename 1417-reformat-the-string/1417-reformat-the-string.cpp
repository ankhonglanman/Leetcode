class Solution {
private:
    inline bool isDigit(char c){
        return (c >= '0' && c <= '9');
    }
public:
    string reformat(string s) {
        vector<char> digits;
        digits.reserve(s.size());
        vector<char> chars;
        chars.reserve(s.size());

        for(int i = 0; i < s.size(); i++){
            if(isDigit(s[i])){
                digits.push_back(s[i]);
            }
            else{
                chars.push_back(s[i]);  
            }
        }
        string res(s.size(), '0');
        if(abs((int)digits.size() - (int)chars.size()) > 1){
            return "";
        }
        else{
            int i = 0;
            if(digits.size() > chars.size()){
                int x = 0;
                int y = 0;
                res[0] = digits[y++];
                for(int i = 1; i < s.size(); i += 2){
                    res[i] = chars[x++];
                    res[i+1] = digits[y++];
                }
            }
            else if(digits.size() < chars.size()){
                int x = 0;
                int y = 0;
                res[0] = chars[y++];
                for(int i = 1; i < s.size(); i += 2){
                    res[i] = digits[x++];
                    res[i+1] = chars[y++];
                }
            }
            else{
                int x = 0;
                int y = 0;
                for(int i = 0; i < s.size(); i += 2){
                    res[i] = chars[x++];
                    res[i+1] = digits[y++];
                }
            }
        }
        
        return res;
    }
};