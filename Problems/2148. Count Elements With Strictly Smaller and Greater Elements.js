var countElements = function(nums) {
   nums.sort(function(a,b) { return a-b});
   let index= nums.length -1;
   let count =0;
    
    for(i=1; i<index; i++){
        if(nums[i]>nums[0] && nums[i] < nums[index] ){
            count++;
        }

    }
    // console.log(count);
    return count;

    
};

countElements([11,7,2,15])