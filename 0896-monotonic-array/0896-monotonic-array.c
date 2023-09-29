bool isMonotonic(int* nums, int numsSize){
    int flag = 0;
    int tmp = nums[0];
    
    for(int c = 1; c < numsSize; c++){
        if(tmp < nums[c]){
            flag = 1; // Increasing
        }
        else if(tmp > nums[c]){
            flag = -1; // Decreasing
        }
        tmp = nums[c];
    }
    
    for(int i = 1; i < numsSize; i++){
        if((flag == 1 && nums[i-1] > nums[i]) || (flag == -1 && nums[i-1] < nums[i])){
            return false;
        }
    }
    
    return true;
}
