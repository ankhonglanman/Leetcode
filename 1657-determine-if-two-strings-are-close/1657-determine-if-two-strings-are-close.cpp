class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) return false;
        if(word1.size() == 1) return word1[0] == word2[0];

        vector<int> key1;
        key1.reserve(word1.size());
        vector<int> key2;
        key2.reserve(word2.size());

        unordered_map<char, int> map1;
        for(const auto& ch : word1){
            if(map1.contains(ch)){
                map1[ch]++;
            }
            else{
                map1[ch] = 1;
            }
        }

        unordered_map<char, int> map2;
        for(const auto& ch : word2){
            if(map1.contains(ch)){
                map2[ch]++;
            }
            else{
                map2[ch] = 1;
            }
        }

        unordered_map<int, int> map21;
        for(const auto& [ch, count] : map1){
            if(map21.contains(count)){
                map21[count]++;
            }
            else{
                map21[count] = 1;
            }
        }        

        for(const auto& [ch, count] : map2){
            if(map21.contains(count)){
                map21[count]--;
                if(map21[count] == 0) map21.erase(count);
            }
            else{
                return false;
            }
        }

        return true;
    }
};