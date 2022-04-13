var guessNumber = function(n) {
    let high = n;
    let low=1;
    let mid;
    while(low<=high){
         mid = Math.floor((low+high)/2);

        if(guess(mid) == 0) {
            console.log(mid);
            return mid;
        }
        else if(guess(mid)==-1){
            high = mid - 1;
           
        }
        else if(guess(mid) == 1){
           low=mid+1;
            //console.log(high);

        }
        
    }
   return -1
    
};

// guessNumber(10);

// function guess(num){
//     let pick = 6
//     if(num >  pick){
//         return -1;
//     }
//     else if(num<pick){
//         return 1;
//     }
//     else if(num==pick) 
//     {
        
//         return 0;
//     }
// }