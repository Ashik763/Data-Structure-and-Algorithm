var rearrangeArray = function(nums) {
    // console.log(nums);
    let nums2 = [];
    // let temp=-5,j=0,currentValue;
    let j=0;
    let length = nums.length;
    // for(let i=0;i<length;i++) {
    //     if(temp < 0){
    //         while(nums[j] < 0){
    //             j++;
    //         }
    //         currentValue = nums[i];
    //         nums[i] = nums[j];
    //         temp=nums[j];

            
            

    //     }
    //     else if(temp > 0){
    //         while(nums[j] > 0){
    //             j++;
    //         }
    //         currentValue = nums[i];
    //         nums[i] = nums[j];
    //         temp=nums[j];
    //     }
    // }
    for(i=0;i<length;i++){
        if(nums[i]>0){
            nums2[j] = nums[i];
            j=j+2;
        }


    }
    j=1;
    for(i=0;i<length;i++){
        if(nums[i]< 0){
            nums2[j] = nums[i];
            j=j+2;
        }


    }
    console.log(nums2);
    
};


rearrangeArray( [-1,1])