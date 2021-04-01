// Javascript program to perform all arithmetic operations

let num1, num2, sum, sub, mul, div, mod;

num1= Number (prompt("enter a number"))
num2= Number (prompt("enter a number"))

sum= num1 + num2
sub= num1-num2
mul= num1*num2
div= num1/num2
mod= num1%num2

console.log('sum is : '+sum+ ' sub is: '+sub+ ' mul is : '+mul+ ' div is:' +div+ ' mod is:' +mod);
console.log(`sum is : ${sum} \n sub is : ${sub} \n mul is : ${mul} \n div is: ${div} \n mod is: ${mod}`)

//Javascript program to find sum and average of two numbers

let num1, num2, sum, avg;
num1= Number (prompt("enter a number"))
num2= Number (prompt("enter a number"))

sum= num1+num2
avg = sum/2

console.log(`sum is: ${sum} \n avg is ${avg}`)

//Javascript program to find area and perimeter of circle	//area=PI*rad*rad, perm=2*PI*rad;

let rad= Number(prompt("enter a radius"))
let par= 2*Math.PI*rad
let area= Math.PI*rad*rad

console.log(`rad is:  ${rad} \n area is : ${area}`)

//Javascript program to convert temperature from  Celsius to Fahrenheit  
//fahrenheit = (celsius * 9 / 5) + 32;  //celsius to fahrenheit 

let fah, cel
cel=Number (prompt("enter a number"))
fah=(cel*9/5)+32

console.log(`fah is : ${fah}`)


//Javascript program to find cube of an integer number using pow() function and Exponentiation (**)
let base, pow

base= Number (prompt("Enter a number"))
pow= Number (prompt("Enter a number"))

let result= Math.pow(base, pow)
let result2= base**pow

console.log(`result is : ${result} \n result2 is ${result2}`)

//Javascript prgram to swap two numbers without using a temporary variable and using a temp variable
/*temp=first
first=second
second=temp

a=a-b
b=a+b
a=b-a*/

let num1, num2, temp;
num1= Number (prompt("enter a number"))
num2= Number (prompt("enter a number"))
temp=num1;
num1=num2;
num2=temp;
console.log(`num1 is: ${num1} and num2 is: ${num2}`)

//without temp
num1=num1-num2;
num2=num1+num2;
num=num2-num1;

console.log(`num1 is: ${num1} and num2 is: ${num2}`)

// Javascript program to find square root of any number using sqrt function
let num1, result;
num1= Number (prompt("enter a number"))
result=Math.sqrt(num1)
console.log(`square root of ${num1} is: ${result}`)

// Javascript program to find sum of all numbers from 0 to N without using loop 
//sum = n*(n+1)/2

let n, sum;
n= Number (prompt("enter a number"))
sum=n*(n+1)/2

// Javascript program to printing value in Decimal, Octal, Hexadecimal, binary // toString()

let num = 15;
let decimal = num.toString();
let binary = num.toString(2);
let octal = num.toString(8);
let hexa = num.toString(16);
console.log(`${num} in decimal ${decimal}, in binary ${binary}, in octal ${octal}, in hexaDecimal ${hexa}`);
console.log(`hexa decimal in uppercase: ${hexa.toUpperCase()}`)

// Javascript program to print ASCII value of a character // charCodeAt(0)
console.log('a'.charCodeAt(0))
console.log('A'.charCodeAt(0))
console.log('e'.charCodeAt(0))

const sentence = 'The quick brown fox jumps over the lazy dog.';
const index = 4;
console.log(`The character code ${sentence.charCodeAt(index)} is equal to ${sentence.charAt(index)}`); // expected output: "The character code 113 is equal to q"

// Javascript program to generate random numbers between 100 to 1000 
//random() * (max - min + 1) + min
let randomNumber=Math.random();
console.log(`random number between 0 and 1: ${randomNumber}`)
randomNumber=Math.random*10;
console.log(`random numbe between 0 and 10: ${randomNumber}`)
let min=50, max=100;
randomNumber=Math.random()*(max - min + 1) + min
console.log(`random number between 50 to 100 is: ${randomNumber}`)
console.log(`random number without decimal point: ${Math.floor(randomNumber)}`)

// Javascript program to demonstrate example of escape sequences

console.log("Hello\nWorld!");    //use of \n
console.log("\nHello\tWorld!");  // use of \t
console.log("\n\"Hello World!\"");   //use of \"
console.log("\nHello\bWorld!");   //use of \b


