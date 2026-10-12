class Solution {
private:
    string arrayToString(int *vec, int len){
        string returnString;
        for(int i = 0; i < len; i++){
            returnString += to_string(vec[i]) + '#';
        }
        return returnString;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> returnVector;
        
        unordered_map<string, vector<string>> map;
        
        int len = strs.size();
        
        for (int i = 0; i < len; i++){
            
            int currHash[26] = {0};
            
            for(int j = 0; strs[i][j] != '\0'; j++){
                currHash[strs[i][j] - 'a']++;
            }

            string hashedString = arrayToString(currHash, 26);
            
            map[hashedString].push_back(strs[i]);

        }
        for (const auto& [key, valueVector] : map){
            
            returnVector.push_back(valueVector);
        
        }
        
        return returnVector;
    
    }
};