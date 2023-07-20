int firstMissingPositive(int* nums, int numsSize) {
    
    int* ans = (int*)malloc(sizeof(int) * (numsSize + 1)); 

    for (int i = 0; i < numsSize + 1; i++) {
        ans[i] = 0;
    }
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] <= numsSize && nums[i] > 0) {
            ans[nums[i]] = -1;
        }
    }
    
    for (int i = 1; i < numsSize + 1; i++) {
        if (ans[i] != -1) {
            free(ans);
            return i;
        }
    }
    
    free(ans);
    return numsSize + 1;
}