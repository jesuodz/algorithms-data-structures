/*

Problem:
Return true if the given string is a palindrome. Otherwise, return false.

Description:
A palindrome is a word or sentence that's spelled the same way both forward and backward, ignoring punctuation, case, and spacing.

Requirements:
You'll need to remove all non-alphanumeric characters (punctuation, spaces and symbols) and turn everything lower case in order to check for palindromes.
Pass strings with varying formats, such as "racecar", "RaceCar", and "race CAR" among others.
Also pass strings with special symbols, such as "2A3*3a2", "2A3 3a2", and "2_A3*3#A2".

*/

function palindrome( str ) {
    str = str.toLowerCase().replace(/[\W_]+/g, '');
    var strCopy = str.split('').reverse().join('');

    return str == strCopy;
}

console.log( palindrome( "eye" ));  // should return a boolean.
console.log( palindrome( "eye" ));  // should return true.
console.log( palindrome( "_eye" ));     // should return true.
console.log( palindrome( "race car" ));     // should return true.
console.log( palindrome( "not a palindrome" ));     // should return false.
console.log( palindrome( "A man, a plan, a canal. Panama" ));   // should return true.
console.log( palindrome( "never odd or even" ));    // should return true.
console.log( palindrome( "nope" ));     // should return false.
console.log( palindrome( "almostomla" ));   // should return false.
console.log( palindrome( "My age is 0, 0 si ega ym." ));    // should return true.
console.log( palindrome( "1 eye for of 1 eye." ));  // should return false.
console.log( palindrome( "0_0 (: /-\ :); // 0-0" ));    // should return true.
console.log( palindrome( "five|\_/|four" ));    // should return false. 

/*

Why this works?

[\W_] Matches: Any non-word character and _ that is not enclosed in brackets. g is for global match.

Source: https://gist.github.com/protzi/39fc8c5c9b5ad58fa3b2
FreeCodeCamp: https://www.freecodecamp.org/challenges/check-for-palindromes

*/