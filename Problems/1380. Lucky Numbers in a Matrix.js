var luckyNumbers  = function(matrix) {
    let [i, j] = [0,0];
    let rows = matrix.length - 1;
    let colums = matrix[0].length - 1;
    let final = [];
    for( let i = 0; i <= rows; i++ ){
        const smallest = Math.min(...matrix[i]);
        let result = findMaxInCol( smallest, matrix[i].indexOf(smallest), matrix );
        if( result == true) final.push(smallest);
    }
    return final; 
};

function findMaxInCol( num, tempcol, matrix ){
    for( let i = 0; i < matrix.length; i++ ){
        if( matrix[i][tempcol] > num ) return false;
    }
    return true;
}
//The solution is not done by me....