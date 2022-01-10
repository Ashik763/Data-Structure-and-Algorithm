// 1217. Minimum Cost to Move Chips to The Same Position
var minCostToMoveChips = function(position) {

    let even=0,odd=0;
    for(let i=0;i<position.length;i++) {
       if(position[i] %2 ==0){
           even++;
       } 
       else{
           odd++;
       }

    }
    
    if(even> odd){
        // console.log(odd);
        return odd;
    }
    else{
        // console.log(even);
        return even;
    }
    
};


minCostToMoveChips([1,1000000000]);