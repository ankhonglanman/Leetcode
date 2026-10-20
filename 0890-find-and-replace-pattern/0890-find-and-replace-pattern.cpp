class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        unordered_map<char, vector<int>> map;

        for(int i = 0; i < pattern.size(); i++){
            map[pattern[i]].push_back(i);
        }

        vector<vector<int>> rawPattern;
        
        for(const auto& [key, val] : map){
            rawPattern.push_back(move(val));    
        }

        vector<string> res;

        for(const auto& i : rawPattern){
            for(const auto& j : i){
                cout << j << " ";
            }
            cout << endl;
        }

        for(const auto& word : words){
            unordered_set<char> set;
            for(const auto& p : rawPattern){
                if(set.contains(word[p[0]])) goto here;
                else set.insert(word[p[0]]);
                for(const auto& i : p){
                    if (word[i] != word[p[0]]) goto here;
                }
            }
            res.push_back(word);
            here:
        }

        return res;
    }
};