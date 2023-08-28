int removeDuplicates(int* nums, int numsSize){

  int k = 1;
  int flag = 1;
  for(int i=1; i<numsSize; i++){
      
    if(nums[i] != nums[i-1]){
      nums[k++] = nums[i];
      flag = 1;
    }else if(flag < 2){
      nums[k++] = nums[i];
      flag++;
    }
  }

  return k;
}