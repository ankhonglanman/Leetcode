class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> myMap;
        vector<int> ans;
        for(const auto& num : nums1){
            if(myMap.contains(num)){
                myMap[num]++; 
            }
            else{
                myMap.insert({num, 1});
            }
        }
        for(const auto& num : nums2){
            if(myMap.contains(num) && myMap[num] > 0){
                ans.push_back(num);
                myMap[num]--;
            }
        }
        return ans;
    }
};