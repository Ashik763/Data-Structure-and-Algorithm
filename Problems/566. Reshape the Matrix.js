var matrixReshape = function(mat, r, c) {
    let i,j,k=0;
    let mat2=new Array(r);
    let mat3=[];;
    for (i=0;i<mat.length;i++) {
        for (j=0;j<mat[0].length;j++) {
            mat3.push(mat[i][j]);
        }
    }

     //console.log(mat3);

     for(i=0;i<r;i++) {
        // for(j=0;j<c;j++) {
            mat2[i] = new Array(c);
        // }
         
            
       
     }
     
    // console.log(mat[0].length);
    if(( mat.length * mat[0].length ) == r*c){
        
       
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                mat2[i][j]=mat3[k]; 
                k++;
            }
        }
        //console.log(mat2);
        return mat2;
    }
    else{
        //console.log(mat);
        return mat;
    }
    
}; 

// matrixReshape([[1,2,3,4]],2,2);