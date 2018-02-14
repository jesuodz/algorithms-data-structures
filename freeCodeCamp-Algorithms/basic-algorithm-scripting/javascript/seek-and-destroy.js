/*
Problem:
Seek and Destroy

Description:
You will be provided with an initial array (the first argument in the destroyer function), followed by one or more arguments. 
Remove all elements from the initial array that are of the same value as these arguments.
*/

function destroyer(arr) {
    var args = Array.prototype.slice.call( arguments, 1 );
    return arguments[0].filter( x => -1 == args.indexOf(x) );
}

console.log( destroyer( [1, 2, 3, 1, 2, 3], 2, 3 )); // should return [1, 1].
console.log( destroyer( [1, 2, 3, 5, 1, 2, 3], 2, 3 )); // should return [1, 5, 1].
console.log( destroyer( [3, 5, 1, 2, 2], 2, 3, 5 )); // should return [1].
console.log( destroyer( [2, 3, 2, 3], 2, 3 )); // should return [].
console.log( destroyer( ["tree", "hamburger", 53], "tree", 53 )); // should return ["hamburger"]