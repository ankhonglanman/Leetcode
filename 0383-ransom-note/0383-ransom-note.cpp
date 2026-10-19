class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int charCount[26] = {0};

        for(const char& letter : magazine){
            charCount[letter - 'a']++;
        }

        for(const char& letter : ransomNote){
            int index = letter - 'a';
            charCount[index]--;
            if(charCount[index] < 0){
                return false;
            }
        }

        return true;
    }
};