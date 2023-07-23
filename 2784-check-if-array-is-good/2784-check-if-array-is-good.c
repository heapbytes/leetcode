bool isGood(int* nums, int numsSize){
    
    int max = 0;
    int sum = 0;
    int originalsum = 0;
    int count = 0;

    for(int i=0; i<numsSize; i++){
        
        if(max < nums[i]){
            max = nums[i]; 
        }
        sum += nums[i];
        originalsum += i;
    }

    for(int i=0; i<numsSize; i++){
        if(max == nums[i]){
            count += 1;
        }
    }

    if(count == 2 && max+1 == numsSize){
        return originalsum + max == sum;
    }else{
        return false;
    }
}