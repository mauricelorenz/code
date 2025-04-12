//constructs the linebreak separated output from the user input
function makeQuery(myPrefix, myArray, mySuffix) {
  let myOutput = myArray.map(
    (arrayItem) => `${myPrefix}${arrayItem}${mySuffix}`
  );
  myOutput = myOutput.join("<br>");
  document.getElementById("output").innerHTML = myOutput;
}

//calls the function after the user clicks the button
document.getElementById("generate").addEventListener("click", () => {
  //takes user input for the required values
  let myPrefix = document.getElementById("prefix").value;
  let mySep = document.getElementById("separator").value;
  let myArray = document.getElementById("list").value;
  mySep ? (myArray = myArray.split(mySep)) : (myArray = myArray.split(","));
  let mySuffix = document.getElementById("suffix").value;
  //calls the function that creates the output
  makeQuery(myPrefix, myArray, mySuffix);
});
