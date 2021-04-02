
//Write a program to demonstrate  If statement.

let a = 5, b = 6, c;
c = a + b;

if (c == 20) {
    console.log("Executed 1\n");
}
{
    console.log("Execute 2\n");
}
{
    console.log("Execute 3\n");
}
{
    console.log("Execute 4\n");
}

// Execute 2
// Execute 3
// Execute 4

if (true) {
    console.log('first code excuted')
}
if (false) {
    console.log('second code excuted')
}
if (0) {
    console.log('third code excuted')
}
if (1) {
    console.log('fourth code excuted')
}
if ('') {
    console.log('fifth code executed')
}
if (' ') {
    console.log('sixth code executed')
}

//Program to find the largest number of the three.
let a, b, c;
a = Number(prompt('Enter first number: '))
b = Number(prompt('Enter second number: '))
c = Number(prompt('Enter third number: '))
if (a > b && a > c) {
    console.log('a is largest')
}

if (b > a && b > c) {
    console.log('b is largest')
}

if (c > a && c > b) {
    console.log('c is largest')
}

if (a == b && a == c) {
    console.log('all is equal')
}

//Javascript program to print days                                                    

let day;
day = Number(prompt('Enter a number'))

if (day == 1) {
    console.log("Saturday");
}

if (day == 2) {
    console.log("Sunday");
}

if (day == 3) {
    console.log("Monday");
}

if (day == 4) {
    console.log("Tuesday");
}

if (day == 5) {
    console.log("Wednesday");
}

if (day == 6) {
    console.log("Thursday");
}

if (day == 7) {
    console.log("Friday");
}


//Write a program to determine a character entered by the user
let value;
if (value > 0) {
    console.log('Value is positive number')
}
if (value < 0) {
    console.log('Value is positive number')
}
if (Number.isInteger(value)) {
    console.log('Value is an integer')
}
if (Number.isSafeInteger(value)) {
    console.log('Value is a safe integer')
}
if (value < 0) {
    console.log('Value is positive number')
}
if (Number.isFinite(value)) {
    console.log('Value is a finite number')
}
if (Number.isNaN(value)) {
    console.log('Value is not a number NaN')
}
if ((/[a-zA-Z]/).test(value)) {
    console.log('Value is a character')
}
if (/[!@#$%^&*()_+\-=\[\]{};':"\\|,.<>\/?]+/.test(value)) {
    console.log('Value is a special character')
}

//if...else


//Write a program to determine whether a person is eligible to vote

let age;
age = parseInt(prompt('Enter an age'))
if (age >= 18) {
    console.log("You are eligible to vote\n");
}
else {
    console.log("You are not eligible to vote\n");
}

//Write a program to find the largest among two numbers using ternary or conditional operator

let a, b, big;
a = parseInt(prompt('enter a number'))
b = parseInt(prompt('enter a number'))

big = (a > b ? a : b);
console.log(`Big is: ${big}`)



//Write a program to find the largest among two numbers using if else conditon

let a, b;

if (a > b) {
    console.log("A is greater");
}
else {
    console.log("B is greater");
}


//program to show odd or even

let num = parseInt(prompt('enter a number'))

if (num % 2 == 0) {
    console.log(`${num} is even number`)
}
else {
    console.log(`${num} is odd number`)
}
//Write a program to check if a character is in upper case or lower case using if else


let ch = 'e'
if (ch >= 'A' && ch <= 'Z') {
    console.log(`${ch} is in uppercase`)
}
else {
    console.log(`${ch} is in lowercase`)
}


//Write a program to change uppercase into lowercase and lowercase into uppercase

let ch = 'a'
if (ch == ch.toUpperCase()) {
    ch = ch.toLowerCase()
    console.log(`${ch} in lowercase`)
}
else {
    ch = ch.toUpperCase()
    console.log(`${ch} in uppercase`)
}


//Write a program to determine if a character is vowel or consonant

let ch = 'e'
if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
    ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    console.log(`${ch} is vowel`)
}
else {
    console.log(`${ch} is consonant`)
}

//Write a program to find whether a given year is leap year or not

let year = 2020;
if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) {
    console.log(`${year} is leap year`)
}
else {
    console.log(`${year} is not leap year`)
}



//Write a program to demonstrate the use of if...else if structure


let x, y;

if (x == y) {
    console.log("Both are equal\n");
}
else if (x > y) {
    console.log("x is greater than y\n");
}
else {
    console.log("y is greater than x\n");
}


//Write a program to test wether a number is positive or negative
let num;

if (num == 0) {
    console.log("The value is equal to Zero\n");
}
else if (num > 0) {
    console.log("The value is a positive number");
}
else {
    console.log("The value is a negative number");
}

//Write  a program to find the equal value of a number

let number = 0;
if (number == 10) {
    console.log("number is equals to 10");
}
else if (number == 50) {
    console.log("number is equal to 50");
}
else if (number == 100) {
    console.log("number is equal to 100");
}
else {
    console.log("number is not equal to 10, 50 or 100");
}


//write a program to display examination result 

let marks;
if (marks >= 75) {
    console.log("Distinction");
}
else if (marks >= 60 && marks <= 75) {
    console.log("First Division");
}
else if (marks >= 50 && marks <= 60) {
    console.log("Second Division");
}
else {
    console.log("Fail");
}

//Write  a program to find the greatest among three numbers

let a, b, c;
if (a > b) {
    if (a > c) {
        console.log("A is greater\n")
    }
    else {
        console.log("C is greater\n");
    }

}
else if (b > c) {
    console.log("B is greater\n");
}
else {
    console.log("C is greater");
}


//Write  a program to find the greatest among three numbers using and(&&) operator

let a, b, c;
if (a > b && a > c) {
    console.log("A is greater\n");
}
else if (b > a && b > c) {
    console.log("B is greater\n");
}
else {
    console.log("C is greater");
}

//write a program to display examination result of total marks and average and postition

let marks1, marks2, marks3, marks4, total = 0;

total = marks1 + marks2 + marks3 + marks4;
let avg = total / 4;
console.log(`Total is: ${total} and avg is: ${avg}`)

if (avg >= 75) {
    console.log("Distinction");
}
else if (avg >= 60 && avg <= 75) {
    console.log("First Division");
}
else if (avg >= 50 && avg <= 60) {
    console.log("Second Division");
}
else {
    console.log("Fail");
}

//A simple calculator using if else statement
let num1, num2, sum, sub, div, mod, mul;
let op;
operation=prompt('Choose operations\n+\n-\n*\n/\n%')
num1=Number(prompt('Enter first number: '));
num2=Number(prompt('Enter first number: '));
if(operation=='+'){
    sum=num1+num2;
    console.log(`Sum is: ${sum}`)
}






