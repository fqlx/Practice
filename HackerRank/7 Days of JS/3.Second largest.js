function processData(myArray) 
{
     var maxi = Math.max.apply(null, myArray);
    console.log(Math.max.apply(null, myArray.filter((x) => x != maxi)));    
}


// tail starts here
process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input.split('\n')[1].split(' ').map(Number));
});