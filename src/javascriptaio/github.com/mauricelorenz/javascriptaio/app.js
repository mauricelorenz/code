// let test = 2 ** 53;
// test.replace("l", "p");
// let test2 = 2 ** -53;
// test.replace("l", "p");
// console.log(`test: ${test}, test2: ${test2}`);
// let test = "test";
// for (i in test) {
//   console.log(i + ": " + test[i]);
// }
// for (i of test) {
//   console.log(i);
// }
// let myArray = [1, 2, 3, 4];
// let myArray2 = [4, 5, 6, 7];
// let myArray3 = myArray.concat(myArray2);
// let myArray4 = myArray + myArray2;
// console.log(typeof myArray3, typeof myArray4);
// myArray5 = myArray.join();
// console.log(myArray5);
// myNewArray = myArray.slice(0, 2).reverse();
// console.log(myNewArray);
// let test = 2;
// let test2 = (test) => test + test;
// console.log(test2(test));

let randomString = Math.random();
console.log(randomString);
randomString = randomString.toString(36);
console.log(randomString);
randomString = randomString.split(".")[1];
console.log(randomString);
document.getElementById("test").innerHTML = randomString;
