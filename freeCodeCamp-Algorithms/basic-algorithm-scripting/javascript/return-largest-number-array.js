/*
Problem:
Return Largest Numbers in Arrays

Description:
Return an array consisting of the largest number from each provided sub-array. 
For simplicity, the provided array will contain exactly 4 sub-arrays.
Remember, you can iterate through an array with a simple for loop, and access each member with array syntax arr[i].

*/

function largestOfFour(arr) {
    var largestNums = [];

    for ( var i = 0; i < arr.length; i++ ) {
        var num = arr[i][0];
        for ( var j = 1; j < arr[i].length; j++ ) {
            if ( num < arr[i][j] ) {
                num = arr[i][j];
            }
        }
        largestNums.push(num);
    }

    return largestNums;
}

console.log(largestOfFour([[4, 5, 1, 3], [13, 27, 18, 26], [32, 35, 37, 39], [1000, 1001, 857, 1]])); // should return an array.
console.log(largestOfFour([[13, 27, 18, 26], [4, 5, 1, 3], [32, 35, 37, 39], [1000, 1001, 857, 1]])); // should return [27,5,39,1001].
console.log(largestOfFour([[4, 9, 1, 3], [13, 35, 18, 26], [32, 35, 97, 39], [1000000, 1001, 857, 1]])); // should return [9, 35, 97, 1000000]

/*

FreeCodeCamp: https://www.freecodecamp.org/challenges/return-largest-numbers-in-arrays

*/