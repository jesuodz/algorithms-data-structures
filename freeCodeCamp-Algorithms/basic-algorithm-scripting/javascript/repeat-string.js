/*

Problem:
Repeat a string repeat a string

Description:
Repeat a given string (first argument) num times (second argument). Return an empty string if num is not a positive number.

*/


function repeatStringNumTimes( str, num ) {
    if ( num < 1 ) {
        return "";
    }

    return str.repeat( num );
}

console.log( repeatStringNumTimes( "*", 3 )); // should return "***".
console.log( repeatStringNumTimes( "abc", 3 )); // should return "abcabcabc".
console.log( repeatStringNumTimes( "abc", 4 )); // should return "abcabcabcabc".
console.log( repeatStringNumTimes( "abc", 1 )); // should return "abc".
console.log( repeatStringNumTimes( "*", 8 )); // should return "********".
console.log( repeatStringNumTimes( "abc", -2 )); // should return "".

// FreeCodeCamp: https://www.freecodecamp.org/challenges/repeat-a-string-repeat-a-string