/*

Problem:
Truncate a string

Description:
Truncate a string (first argument) if it is longer than the given maximum string length (second argument). 
Return the truncated string with a ... ending.
Note that inserting the three dots to the end will add to the string length.
However, if the given maximum string length num is less than or equal to 3, 
then the addition of the three dots does not add to the string length in determining the truncated string.

*/

"use strict";

function truncateString(str, num) {    
    if ( str.length > num ) {
        return ( num < 3 ) ? str.slice( 0, num ) + '...' : str.slice( 0, num - 3 ) + '...' ;
    } 
    return str;
}

console.log( truncateString( "A-tisket a-tasket A green and yellow basket", 11 )); // should return "A-tisket...".
console.log( truncateString( "Peter Piper picked a peck of pickled peppers", 14 )); // should return "Peter Piper...".
console.log( truncateString( "A-tisket a-tasket A green and yellow basket", "A-tisket a-tasket A green and yellow basket".length )); // should return "A-tisket a-tasket A green and yellow basket".
console.log( truncateString( "A-tisket a-tasket A green and yellow basket", "A-tisket a-tasket A green and yellow basket".length + 2 )); // should return "A-tisket a-tasket A green and yellow basket".
console.log( truncateString( "A-", 1 )); // should return "A...".
console.log( truncateString( "Absolutely Longer", 2 )); // should return "Ab...".

/*

FreeCodeCamp: https://www.freecodecamp.org/challenges/truncate-a-string

*/