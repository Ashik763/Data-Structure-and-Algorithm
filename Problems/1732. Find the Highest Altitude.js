var largestAltitude = function(gain) {
    let max=0;
    let sum=0;
   // gain[0]=0+gain[0];
    for(let i=0;i<gain.length;i++){
        // console.log("hi");
        sum = sum + gain[i];
        if(sum > max){
            max = sum;

        }
    }
    console.log(max);
    
};



largestAltitude([-5,1,5,0,-7])