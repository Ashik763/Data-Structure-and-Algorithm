var mySqrt = function(x) {
    if(x==1 || x == 0 ){
        console.log(x);
        return x;
    }
    else if( x == 2 || x == 3 ){
        console.log(1);
        return 1;
    }
    else{
        // for(let i=1;i <= x;i++){
       
        //     if(i*i > x){
                
        //         // console.log(i-1);
        //         return i-1 ;
        //     }
          
        // }
        let i =x;
        while(i=Math.floor(i/2)){
            if(i*i<x){
                while(i++){
                    if(i*i>x){
                        console.log(i-1);
                        return i-1;
                    }
                }

            }
            else if(i*i==x){
                console.log(i);
                return i;
            }
            
        }

    }
    
    
};

mySqrt(10);