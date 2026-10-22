class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freqTable; //key : num && val : freq
        for(const auto& num : arr){
            if(freqTable.contains(num)) freqTable[num]++;
            else freqTable[num] = 1;
        }

        unordered_set<int> freqSet;
        for(const auto& [num, freq] : freqTable){
            if(freqSet.contains(freq)) return false;
            freqSet.insert(freq);
        }

        return true;
    }
};