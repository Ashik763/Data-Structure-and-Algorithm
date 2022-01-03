// const arr = [[23,4,1],[18,12,3,9],[78,99,34,56],[18,12]];
// for(var i = 0; i < arr.length; i++){
//     for(var j = 0; j < arr.length; j++){
//         console.log(arr[i][j]+ " ");
//     }
//     console.log("\n");
// }
var gfg = new Array(2);
const ara1 = [0,1]
const ara2 = [2,3]
  
document.write("Creating 2D array <br>");
  
// Loop to create 2D array using 1D array
// for (var i = 0; i < gfg.length; i++) {
//     gfg[i] = new Array(2);
// }
gfg[0]= ara1;
gfg[1]= ara2;
  
var h = 0;
  
// Loop to initialize 2D array elements.
for (var i = 0; i < 2; i++) {
    for (var j = 0; j < 2; j++) {
        gfg[i][j] = h++;
    }
}
  
// Loop to display the elements of 2D array. 
for (var i = 0; i < 2; i++) {
    for (var j = 0; j < 2; j++)    {
        document.write(gfg[i][j] + " ");
    }
    document.write("<br>");
} 