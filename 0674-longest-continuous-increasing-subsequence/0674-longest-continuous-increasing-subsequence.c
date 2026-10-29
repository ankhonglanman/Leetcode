int findLengthOfLCIS(int* nums, int numsSize) {
    if(numsSize == 1) return 1;

    int LCIS = 1;
    int left = 0;
    for(int right = 1; right < numsSize; right++){
        if(nums[right] <= nums[right - 1]) left = right;
        
        int curLen = right - left + 1;

        if(curLen > LCIS) LCIS = curLen; 
    }    

    return LCIS;
}