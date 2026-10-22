class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1;
        unordered_set<int> set2;
        vector<vector<int>> res;

        for(const auto& num1 : nums1){
            set1.insert(num1);
        }
        for(const auto& num2 : nums2){
            set2.insert(num2);
        }
        vector<int> vec1;
        for(const auto& num1 : set1){
            if(!set2.contains(num1)) vec1.push_back(num1);
        }
        vector<int> vec2;
        for(const auto& num2 : set2){
            if(!set1.contains(num2)) vec2.push_back(num2);  
        }

        res.push_back(move(vec1));
        res.push_back(move(vec2));

        return res;
    }
};