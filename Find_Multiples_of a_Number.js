//https://www.codewars.com/kata/58ca658cc0d6401f2700045f/train/javascript

function findMultiples(integer, limit) {
  //your code here
  var arr = [];
  for(var i = 1  ; limit >= i * integer; i++ ){
  	arr.push(i * integer)
  }
  return arr
}
