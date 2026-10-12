double findMaxAverage(int* nums, int numsSize, int k) 
{
    long maxSum   = 0;
    long currSum  = 0;

    for(int i = 0; i < k; i++)
    {
        maxSum += nums[i];
    }

    currSum = maxSum;

    for(int i = k; i < numsSize; i++)
    {
        currSum -= nums[i - k] - nums[i];
        if(currSum > maxSum){
            maxSum = currSum;
        } 
    }

    return (double)maxSum/k;

}