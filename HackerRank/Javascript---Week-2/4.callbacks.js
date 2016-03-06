function myFilter(my_array, callback){
   return my_array.filter(callback);  
}

function processData(inputArray) {
    console.log(myFilter(inputArray, (x) => (x % 2 === 0)));   
} 
