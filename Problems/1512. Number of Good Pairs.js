var numIdenticalPairs = function(nums) {
    nums.sort();
   // console.log(nums);
    let count = 0,j;
    for(let i = 0; i <nums.length-1; i++){
      j=i+1;
        while(nums[i]==nums[j]){
            count++;
            j++;
        }

      
    }
    console.log(count);
    
};


numIdenticalPairs([1,2,3,1,1,3]);