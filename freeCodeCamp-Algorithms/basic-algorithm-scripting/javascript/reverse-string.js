/*

Problem:
Reverse the provided string.

Description:
You may need to turn the string into an array before you can reverse it.
Your result must be a string.

Requirements:
You should use split(), reverse() and join() methods.

*/

function reverseString( str ) {
    var reverse = str.split('').reverse();
    return reverse.join('');
}

reverseString("hello"); // should return a string.
reverseString("hello"); // should become "olleh".
reverseString("Howdy"); // should become "ydwoH".
reverseString("Greetings from Earth"); // should return "htraE morf sgniteerG"

/*

FreeCodeCamp: https://www.freecodecamp.org/challenges/reverse-a-string

*/