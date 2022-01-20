var createTargetArray = function(nums, index) {
    let target = [];
    let length = nums.length;
    console.log(length);
    let i,j;
    for(i=0;i<length;i++) {
       target.splice(index[i],0,nums[i])
      
       
    }
    console.log(target);

    
};

createTargetArray([0,1,2,3,4],[0,1,2,2,1]);