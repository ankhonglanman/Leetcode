class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first = -pow(2, 31) - 1, second = -pow(2, 31) - 1, third = -pow(2, 31) - 1;
        bool check = 0;
        int count = 3;
        if (nums.size() == 1) return nums[0];
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == first || nums[i] == second || nums[i] == third) continue;
            if (nums[i] > first){
                count--;
                third = second;
                second = first;
                first = nums[i];
            }
            else {
                if (nums[i] > second){
                    count--;
                    third = second;
                    second = nums[i]; 
                }
                else {
                    if (nums[i] > third){
                        check = true;
                        third = nums[i];
                    }
                }
            }
        }
        check = (check)? true:(count <= 0)? true: false;
        if (check) return third;
        else return first;
    }
};