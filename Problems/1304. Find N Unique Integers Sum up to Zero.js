var sumZero = function(n) {
    let ara=[];
    if(n%2 == 0) {
        for(let i=n;i>n/2;i--){

            ara.push(i);
            ara.push(-i);



        }
       // console.log(ara);
       return ara;
    }
   else {
        for(let i=n;i>(n/2)+1;i--){

            ara.push(i);
            ara.push(-i);



        }
        ara.push(0);
        // console.log(ara);
        return ara;
    }
    
};

sumZero(7);