/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {

    bool    *pbReturnArray       = (bool*)malloc(sizeof(bool) * candiesSize); 
    int32_t s32GreatestCandies  = 0; 

    *(returnSize)                  = candiesSize;

    for (int i = 0; i < candiesSize; i++){
        if(s32GreatestCandies < candies[i]){
            s32GreatestCandies = candies[i];
        }
    }
    for(int i = 0; i < candiesSize; i++){
        if((candies[i] + extraCandies) >= s32GreatestCandies){
            pbReturnArray[i] = true;
        }
        else {
            pbReturnArray[i] = false;
        }
    }
    return pbReturnArray;
}