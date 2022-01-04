var findNumbers = function(nums) {
    let count=0;
    for(let i = 0; i < nums.length; i++) {
        let num = nums[i].toString();
        //   for(let j = 0; j < num.length; j++) {
        //       if(num[j]%2 == 0){
        //           count++;
        //       }
        //   }
        if(num.length % 2 == 0){
            count++;
        }
    }
   return count;
  // console.log(count);
};

findNumbers([0,0,22,33]);