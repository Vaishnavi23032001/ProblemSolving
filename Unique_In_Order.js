//https://www.codewars.com/kata/54e6533c92449cc251001667/train/javascript

var uniqueInOrder=function(iterable){
  //your code here - remember iterable can be a string or an array
  var arr=[];
  for(var i=0;i<iterable.length;i++){
    if(iterable[i] !== iterable[i+1])
    {
      arr.push(iterable[i]);
    }
  }
  return arr;
}
