var countMatches = function(items, ruleKey, ruleValue) {
    let count = 0;
    if(ruleKey === "type"){
   
        for(let i = 0; i < items.length; i++){
            for(let j = 0; j <1;j++){
                if(items[i][j] === ruleValue){
                    count++;
                }
            }
        }
    }
    else if(ruleKey === "color"){
   
        for(let i = 0; i < items.length; i++){
            for(let j = 1; j <2;j++){
                if(items[i][j] === ruleValue){
                    count++;
                }
            }
        }
    }
    else if(ruleKey === "name"){
   
        for(let i = 0; i < items.length; i++){
            for(let j = 2; j <3;j++){
                if(items[i][j] === ruleValue){
                    count++;
                }
            }
        }
    }
    //console.log(count);
    return count;
};




countMatches( [["phone","blue","pixel"],["computer","silver","phone"],["phone","gold","iphone"]],"type","phone")