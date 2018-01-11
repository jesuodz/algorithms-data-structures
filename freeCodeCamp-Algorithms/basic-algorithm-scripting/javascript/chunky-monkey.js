/*

Problem:
Chunky Monkey

Description:
Write a function that splits an array (first argument) into groups the length of size 
(second argument) and returns them as a two-dimensional array.

*/

"use strict";

function chunkArrayInGroups( arr, size ) {
    var multiArr = [];
    var index = 0;

    do {
        multiArr.push( arr.slice( index, index + size ));
        index += size;
    } while ( index < arr.length );

    return multiArr;
}

console.log(  chunkArrayInGroups( ["a", "b", "c", "d"], 2 )); // should return [["a", "b"], ["c", "d"]].
console.log(  chunkArrayInGroups( [0, 1, 2, 3, 4, 5], 3 )); // should return [[0, 1, 2], [3, 4, 5]].
console.log(  chunkArrayInGroups( [0, 1, 2, 3, 4, 5], 2 )); // should return [[0, 1], [2, 3], [4, 5]].
console.log(  chunkArrayInGroups( [0, 1, 2, 3, 4, 5], 4 )); // should return [[0, 1, 2, 3], [4, 5]].
console.log(  chunkArrayInGroups( [0, 1, 2, 3, 4, 5, 6], 3 )); // should return [[0, 1, 2], [3, 4, 5], [6]].
console.log(  chunkArrayInGroups( [0, 1, 2, 3, 4, 5, 6, 7, 8], 4 )); // should return [[0, 1, 2, 3], [4, 5, 6, 7], [8]].
console.log(  chunkArrayInGroups( [0, 1, 2, 3, 4, 5, 6, 7, 8], 2 )); // should return [[0, 1], [2, 3], [4, 5], [6, 7], [8]].

// FreeCodeCamp: https://www.freecodecamp.org/challenges/chunky-monkey