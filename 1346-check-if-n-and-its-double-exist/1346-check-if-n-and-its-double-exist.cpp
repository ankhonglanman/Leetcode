class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> hashMap;
        int zeroCount = 0;
        for (const auto& num : arr){
            if(num % 2 == 0 && num != 0){
                hashMap.insert(num / 2);
            }
            if(num == 0){
                zeroCount++;
            }
            if(zeroCount == 2){
                return true;
            }
        }
        if(hashMap.empty()){
            return false;
        }
        for(const auto& num : arr){
            if(hashMap.contains(num)){
                return true;
            }
        }
        return false;
    }
};