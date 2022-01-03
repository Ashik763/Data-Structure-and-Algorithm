const str = "ashik ghosh";
const target = "k";

(function linearSearch2(str,target){
    for(let i = 0; i < str.length; i++){
        if(str[i] == target){
            console.dir(i);
        }
    }
})(str, target)

// linearSearch2(str,target)