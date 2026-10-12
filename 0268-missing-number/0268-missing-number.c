int missingNumber(int* nums, int numsSize) {
    int fullArr[numsSize + 1];
    int result = 0;
    for (int i = 0; i < numsSize + 1; i++){
        fullArr[i] = i;
    }
    for (int j = 0; j < 2*numsSize + 1; j++){
        if (j < numsSize){
            result ^= nums[j];
        }
        else {
            result ^= fullArr[j - numsSize];
        }
    }
    return result;
}