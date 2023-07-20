int findDuplicate(int* nums, int numsSize){

    for(int i=0; i<numsSize; i++){
        int ch = abs(nums[i]) -1;
        
        if(nums[ch] < 0){
            return abs(nums[i]);
        }
        else{
            nums[ch] = nums[ch]* -1;
        }
    }

    return -1;
}