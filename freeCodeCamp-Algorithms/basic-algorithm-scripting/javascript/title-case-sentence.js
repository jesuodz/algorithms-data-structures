/* 

Problem:
Title Case a Sentence

Description:
Return the provided string with the first letter of each word capitalized. Make sure the rest of the word is in lower case.
For the purpose of this exercise, you should also capitalize connecting words like "the" and "of".

*/

// jshint esversion:6

function titleCase( str ) {
    str = str.toLowerCase().split(' ');

    return str.map( 
        i => i.charAt(0).toUpperCase() + i.slice(1)
    ).join(' ');
}

console.log( titleCase( "I'm a little tea pot" )); // should return a string.
console.log( titleCase( "I'm a little tea pot" )); // should return "I'm A Little Tea Pot".
console.log( titleCase( "sHoRt AnD sToUt" )); // should return "Short And Stout".
console.log( titleCase( "HERE IS MY HANDLE HERE IS MY SPOUT" )); // should return "Here Is My Handle Here Is My Spout". 

/*

Other version

    return str.map( function(x) {
        return x.charAt(0).toUpperCase() + x.slice(1);
    }).join(' ');

FreeCodeCamp: https://www.freecodecamp.org/challenges/title-case-a-sentence

*/