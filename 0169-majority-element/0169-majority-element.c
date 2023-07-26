int majorityElement(int* nums, int numsSize){
    
    int count = 0;
    int max = 0;
    
    for(int i=0; i<numsSize; i++){
        
        if(count == 0) max = nums[i];
        
        if(nums[i] == max){
            count += 1;
        }else{
            count -= 1;
        }
    }
    
    count = 0;
    for(int i=0; i<numsSize; i++){
        if(nums[i] == max){
            count += 1;
        }
    }
    
    return (count > numsSize / 2) ? max : -1;
    
}