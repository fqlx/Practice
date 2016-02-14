function processData(input)
{
var string=input.split('\n');
var t=parseInt(string[0]);
 for(var i=0;i<t;i++){
    var count=0;
    var current_string=input.split('\n')[i+1];
    var s=0;
    var l=current_string.length-1;
    while(s<=l){
        count+=Math.abs(current_string.charCodeAt(l)-current_string.charCodeAt(s));
        s++;
        l--;
    }
 console.log(count);

  }
}

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});

function findN(r, c, maxr, maxc, lelarray){

    if(r >= maxr) r = maxr-1;
    if(c >= maxc) c = maxc-1;
    if(r < 0) r = 0;
    if(c < 0) c = 0;

    count = 0;
    var val = lelarray[r][c];
    if(val == -69) return 0; 
    if(val == 0) return 0;
    if(val == 1){
        count++;
        lelarray[r][c] = -69; 

        count += findN(r+1, c, maxr, maxc, lelarray);
        count += findN(r-1, c, maxr, maxc, lelarray);
        count += findN(r, c+1, maxr, maxc, lelarray);
        count += findN(r, c-1, maxr, maxc, lelarray);
        count += findN(r+1, c+1, maxr, maxc, lelarray);
        count += findN(r-1, c-1, maxr, maxc, lelarray);
        count += findN(r-1, c+1, maxr, maxc, lelarray);
        count += findN(r+1, c-1, maxr, maxc, lelarray);
    }
    return count;
}
