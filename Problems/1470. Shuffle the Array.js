var shuffle = function(nums, n) {
let nums2 = nums.slice(n,2*n);
let nums1 = nums.slice(0,n);
let j=0, k=0;
  for(let i = 0; i <2*n;i++) {
      if(i %2 ==0){
          nums[i] = nums1[j];
          j++;

      }
      else{
          nums[i] = nums2[k];
          k++;
      }
  }
  console.log(nums);
   
};


shuffle([2,5,1,3,4,7],3);