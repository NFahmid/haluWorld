// // Function that returns a function
// function greet(greeting){
//     return function(name){
//         console.log(greeting + " " + name);
//     }
// }

// let greetMorning = greet("Good Morning");
// let greetEvening = greet("Good Evening");

// greetMorning("John");
// greetEvening("John");

// // Function that accepts a function as an argument
// function greet2(greeting, name){
//     console.log(greeting + " " + name);
// }

// function greetMorning2(name){
//     greet2("Good Morning", name);
// }

// function greetEvening2(name){
//     greet2("Good Evening", name);
// }

// greetMorning2("John");
// greetEvening2("John");

// // Function that returns a function that accepts a function as an argument
// function greet3(greeting){
//     return function(name){
//         console.log(greeting + " " + name);
//     }
// }

// function greetMorning3(name){
//     greet3("Good Morning")(name);
// }

// function greetEvening3(name){
//     greet3("Good Evening")(name);
// }

// greetMorning3("John");
// greetEvening3("John");

// // Function that returns a function that accepts a function as an argument
// function greet4(greeting){
//     return function(name){
//         console.log(greeting + " " + name);
//     }
// }

// function greetMorning4(name){
//     greet4("Good Morning")(name);
// }

// function greetEvening4(name){
//     greet4("Good Evening")(name);
// }

// greetMorning4("John");
// greetEvening4("John");

// set timeout

// function greet5(greeting){
//     return function(name){
//         console.log(greeting + " " + name);
//     }
// }

// let greetMorning5 = greet5("Good Morning");
// let greetEvening5 = greet5("Good Evening");

// setTimeout(function(){
//     greetMorning5("John");
// }, 2000);

// setTimeout(function(){
//     greetEvening5("John");
// }, 4000);

// asynchoronous function

function greetMorning(){
    console.log("Good Morning");
}

function greetEvening(){
    console.log("Good Evening");
}

setTimeout(greetMorning, 2000);

setTimeout(greetEvening, 4000);

console.log("End of script");

