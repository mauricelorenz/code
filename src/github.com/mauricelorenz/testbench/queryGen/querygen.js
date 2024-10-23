//constructs the linebreak separated output from the user input
function makeQuery(myPrefix, myArray, mySuffix) {
  let myOutput = myArray.map(
    (arrayItem, index) => `${myPrefix}${arrayItem}${mySuffix}`
  );
  myOutput = myOutput.join("<br>");
  return myOutput;
}

let myPrefix = prompt("Prefix");
let mySep = prompt("Trennzeichen");
let myArray = prompt("Liste").split(mySep);
let mySuffix = prompt("Suffix");

document.getElementById("output").innerHTML = makeQuery(
  myPrefix,
  myArray,
  mySuffix
);
