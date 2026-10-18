class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string sWord1;
        string sWord2;
        for(const auto& w : word1){
            sWord1 += w;
        }
        for(const auto& w : word2){
            sWord2 += w;
        }
        return (sWord1 == sWord2);
    }
};