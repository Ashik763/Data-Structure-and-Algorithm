const arr = [1,2,3,4,5,6,7,8,9];
const target = 15;


const a = linearSearch(arr,target);
console.log(a);

function linearSearch(array, target){
    for(var i=0; i<array.length; i++){
        if(array.length == 0){
            return -1


        }
         else if(array[i] == target){
            return i;
            
        }
        else{
            return -1;
        }
    }

}

