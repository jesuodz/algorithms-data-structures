/*
Problem:
Falsy Bouncer

Description:
Remove all falsy values from an array.
Falsy values in JavaScript are false, null, 0, "", undefined, and NaN.
*/

'esversion:6';
function bouncer(arr) {
    // Own solution
    return arr.filter( x => !!x );
    // FreeCodeCamp (Much simpler)
    // return arr.filter(Boolean);
}
  
console.log( bouncer( [7, "ate", "", false, 9] )); // should return [7, "ate", 9].
console.log( bouncer( ["a", "b", "c"] )); // should return ["a", "b", "c"].
console.log( bouncer( [false, null, 0, NaN, undefined, ""] )); // should return [].
console.log( bouncer( [1, null, NaN, 2, undefined] )); // should return [1, 2].

/*
Source:
FreeCodeCamp: https://forum.freecodecamp.org/t/freecodecamp-algorithm-challenge-guide-falsy-bouncer/16014
Own solution: https://gist.github.com/Alex1990/4e018eea77ec9725403b
*/