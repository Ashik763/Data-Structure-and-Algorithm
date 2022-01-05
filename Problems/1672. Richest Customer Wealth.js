var maximumWealth = function(accounts) {
    let sum;
    let max=0;
   
    for(let i=0; i< accounts.length;i++  ){
        sum = 0;
        for(let j=0;j<accounts[i].length;j++)
            {
                sum=sum+accounts[i][j];
            }
        if(max<sum){
            max=sum;
        }
        
    }
  //  return max;
  console.log(max);  
};



maximumWealth([[1,2,3],[3,2,1]]);