const arr = [18,12,7,3,14,28];


function FindMin(arr) {
    let min =arr[0];
    for (var i = 1; i < arr.length; i++){
        if(arr[i]  < min) min = arr[i];
    }
    return min;
}
console.log(FindMin(arr));