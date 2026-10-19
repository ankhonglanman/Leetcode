class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int left = 0;
        int size = s.size();
        int max = 0;

        for(int right = 0; right < size; right++){
            
            if(!set.contains(s[right])){
                set.insert(s[right]);
            }
            else{
                while(s[left] != s[right]){
                    set.erase(s[left]);
                    left++;
                }
                left++;
            }

            int curLen = right - left + 1;

            if (curLen > max){
                max = curLen;
            }

        }

        return max;
    }
};