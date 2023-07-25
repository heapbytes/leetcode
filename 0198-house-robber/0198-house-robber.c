int rob(int* nums, int numsSize){

    if(numsSize == 0){
        return 0;
    }
    if(numsSize == 1){
        return nums[0];
    } 

    int prev = nums[0];
    int curr = fmax(nums[0], nums[1]);

    for(int i=2; i<numsSize; i++){
        int temp = curr;
        curr = fmax(curr, prev + nums[i]);
        prev = temp;
    }

    return curr;
}