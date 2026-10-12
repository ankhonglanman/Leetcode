class Solution {
private:

    struct no{
        int red;
        int white;
        int blue;
    };

public:
    void sortColors(vector<int>& nums) {

        int len = nums.size();
    
        struct no numO = {0};
    
        for(const auto& num : nums){
            if(num == 0){
                numO.red++;
            }
            else if(num == 1){
                numO.white++;
            }        
            else{
                numO.blue++;
            }
        }

        for(int i = 0; i < len; i++){
            if(i < numO.red){
                nums[i] = 0; 
            }
            else if(i >= numO.red && i < numO.red + numO.white){
                nums[i] = 1;
            }
            else{
                nums[i] = 2;
            }
        }  

    }
};