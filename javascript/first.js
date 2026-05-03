console.log("hello","world", 2); 
console.error("error");
console.warn("warning"); 

// variables
age = 19;
fname = "ayush";
a= null;
b= undefined;
price= 99.99;
bool = true;
console.log(fname); 
console.log(`i am ${age} years old`)

// taking input from user in browser
/* let name = prompt("Enter your name:");  //used to take input from user
console.log("Hello " + name);   
alert(`your name is ${name}`);    // used to show alert message to user
*/

// taking input from user in nodejs and printing it
const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});
console.log("Enter your name: ");
readline.on('line', (name) => {
    console.log(`Hello ${name}`);
    readline.close();
});

// data types in js
// 1. string
// 2. number
// 3. boolean
// 4. null
// 5. undefined

// variables in js
var x = 10; // var is function scoped
let y = 20; // let is block scoped
const z = 30; // const is block scoped and cannot be reassigned

// operators in js
// 1. arithmetic operators: +, -, *, /, %
// 2. assignment operators: =, +=, -=, *=, /=
// 3. comparison operators: ==, ===, !=, !==, >, <, >=, <=
// 4. logical operators: &&, ||, !
// 5. bitwise operators: &, |, ^, ~, <<, >>, >>>

// arithmetic operators for different data types
console.log(10 + 20); // 30
console.log("hello" + "world"); // helloworld
console.log("hello" + 10); // hello10
console.log(10 + "hello"); // 10hello
console.log(true + true); // 2
console.log(true + false); // 1
console.log(false + false); // 0
console.log(6 + true); // 7
console.log(6 + false); // 6

console.log("123" * 2); // 246
console.log("123" / 2); // 61.5

console.log("hi" - 2 ); // NaN

// type coercion in js
const num1 = 10;
const num2 = "20";
console.log(num1 + Number(num2)); // 30
const num3 = 10;
const num4 = 20;
console.log(String(num3) + String(num4)); // "1020"
// or
console.log(num3.toString() + num4.toString()); // "1020"


// comparison operators
console.log(10 == "10"); // true , conerts to same type
console.log(10 === "10"); // false, does not convert to same type

// logical operators
console.log(true && false); // false
console.log(true || false); // true
console.log(!true); // false
console.log(!false); // true

console.log(!false); // true
