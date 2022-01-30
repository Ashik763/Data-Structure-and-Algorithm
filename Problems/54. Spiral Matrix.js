var spiralOrder = function(matrix) {
    let len1 = matrix.length;
    let len2 = matrix[0].length;
    let i=0,j=0,count=0;
    
    let matrix2 = [];
    // for(let i = 0; i < len1; i++) {
    //     for(let j = 0; j < len2; j++) {

    //     }
    // }
    while(1){
        if(matrix[i][j]){
            matrix2.push(matrix[i][j]);
            j++;
            count++;
        }
        else{
            i++;
            while(1){
                if(matrix[i][j]){
                    matrix2.push(matrix[i][j]);
                    i++;
                    count++;
                }
                else{
                    i--;
                    j--;
                    while(1){
                        if(matrix[i][j]){
                            matrix2.push(matrix[i][j]);
                            count++;
                            j--;
                        }
                        else{}
                    }
                }
            }
        }

    }
};

spiralOrder([[1,2,3],[4,5,6],[7,8,9]])