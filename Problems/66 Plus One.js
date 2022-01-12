var plusOne = function(digits) {
    
    const digitsArray  = digits.join(''); 
    const arrToInt = BigInt(digitsArray) ;
    const plusone = arrToInt + 1n;
    const plusoneResult =  Array.from(String(plusone), Number); 
    
    return plusoneResult;
};