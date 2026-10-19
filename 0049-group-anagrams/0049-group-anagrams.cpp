class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        map.reserve(strs.size());

        for(const auto& str : strs){
            string key(26, 0);

            for(const auto& c : str){
                key[c - 'a']++;
            }

            map[move(key)].push_back(move(str));
        }
        vector<vector<string>> res;
        res.reserve(map.size());

        for(const auto& [key, value] : map){
            res.push_back(move(value));
        }

        return res;
    }
};