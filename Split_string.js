//https://www.codewars.com/kata/515de9ae9dcfc28eb6000001/train/javascript

function solution(str){
   let i=0;
  var result=[];
  if(str.length %2 !== 0)
    str+='_'
  while(i<str.length)
    {
      result.push(str[i]+str[i+1]);
      i+=2;
    }
  return result;
}
