var buildArray = function(nums) {
    let ans =[];
    let i,j;
    for(i=0;i<nums.length;i++){
        j= nums[i];
        ans[i] = nums[j];
    }
    return ans;
    // for(i=0;i<ans.length;i++){
    //     console.log(ans[i]);
    // }
    
};
buildArray( [5,0,1,2,3,4]);