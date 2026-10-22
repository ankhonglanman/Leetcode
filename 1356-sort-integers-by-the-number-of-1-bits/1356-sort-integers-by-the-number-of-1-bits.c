/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmpNumsBits(const void *a, const void *b){
    int x = *(const int *)a;
    int y = *(const int *)b;
    int numsBitsA = 0;
    int numsBitsB = 0;
    for(int i = 31; i >= 0; i--){
        if((x>>i)&1) numsBitsA++;
        if((y>>i)&1) numsBitsB++;
    }
    if(numsBitsA > numsBitsB){
        return 1;
    }
    else if(numsBitsA < numsBitsB){
        return -1;
    }
    else{
        if(x > y) return 1;
        else if(x < y) return -1;
        else return 0;
    }
}
int* sortByBits(int* arr, int arrSize, int* returnSize) {
    *returnSize = arrSize;
    qsort(arr, arrSize, sizeof(int), cmpNumsBits);
    return arr;
}