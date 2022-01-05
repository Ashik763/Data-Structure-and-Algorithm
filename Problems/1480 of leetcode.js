var runningSum = function(nums) {
    let ans=[];
   
    for(let i=0;i<nums.length;i++)
        {
            let sum =0;
            let j =i;
            while(j>-1)
                {
                    sum=sum+nums[j] ;
                    j--;
                }
            ans[i] = sum;
        }
    return ans;
    //console.log(ans);
    
};

runningSum([1,2,3,4]);