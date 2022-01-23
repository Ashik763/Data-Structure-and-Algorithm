var diagonalSum = function(mat) {
    let length = mat[0].length;
    let sum=0,k=length-1;
    for(let i = 0; i <mat.length; i++) {
        for(let j = 0; j <mat[0].length;j++){
            if(i==j){

                sum=sum+mat[i][j]+mat[i][k];
                if(j==k){
                    sum=sum-mat[i][k];
                }
                k--;
            }
        }
    }
    //console.log(sum);
    return sum;
    
};

diagonalSum([[5]])