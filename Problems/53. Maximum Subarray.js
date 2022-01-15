var maxSubArray = function(nums) {
    let maxSum = nums[0];   
	let sum = nums[0];
	for(let i=1; i< nums.length; i++){   
		sum = Math.max(nums[i], nums[i]+sum);
		if(sum > maxSum) maxSum = sum;
	}
	return maxSum;
};


// maxSubArray([-2,1,-3,4,-1,2,1,-5,4]);