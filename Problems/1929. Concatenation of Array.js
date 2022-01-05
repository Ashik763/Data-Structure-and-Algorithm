var getConcatenation = function(nums) {
    //let ans = nums.concat(nums);
    let n = nums.length;
    let ans = [];
    let j=0;
    for(let i=0;i<n;i++){
        ans[j] = nums[i];
        ans[n+i] = nums[i];
        // if(i== n-1) {
        //     i=0;
        // }
        j++;
        
    }
    // while(i)
       
     console.log(ans);  
    //return ans;
    
};

getConcatenation([1,2,1]);