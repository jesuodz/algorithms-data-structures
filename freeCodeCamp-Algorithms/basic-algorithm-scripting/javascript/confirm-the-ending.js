/*

Problem:
Confirm the Ending

Description:
Check if a string (first argument, str) ends with the given target string (second argument, target).
This challenge can be solved with the .endsWith() method, which was introduced in ES2015.
But for the purpose of this challenge, we would like you to use one of the JavaScript substring methods instead.

*/

function confirmEnding( str, target ) {
    var targetLen = target.length;

    // ES2015 solution:
    // return str.endsWith( target );
    return str.substr( str.length - targetLen ) === target;
}

console.log( confirmEnding( "Bastian", "n" )); // should return true.
console.log( confirmEnding( "connor", "n" )); // should return false.
console.log( 
    confirmEnding( "Walking on water and developing software from a specification are easy if both are frozen", "specification" )
); // should return false.
console.log( confirmEnding( "He has to give me a new name", "name" )); // should return true. 

/*

FreeCodeCamp: https://www.freecodecamp.org/challenges/confirm-the-ending

*/