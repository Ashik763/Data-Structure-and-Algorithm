var findFinalValue = function(nums, original) {

    let i;
    for(i = 0; i < nums.length; i++) {
        if(nums[i] == original){
            original = 2 * original;
            i=-1;
        }
    }
    // console.log(original);
    return original;
    
};
findFinalValue([8,19,4,2,15,3],2)