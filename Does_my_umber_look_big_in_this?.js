//https://www.codewars.com/kata/5287e858c6b5a9678200083c/train/javascript

function narcissistic(value) {
  // Code me to return true or false
  const value1 = String(value).split('');

  let result = 0;

  for (ch of value1) {
    const num = parseInt(ch, 0)

    result += Math.pow(num, value1.length);
  }

  return result === value;
}
