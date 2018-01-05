/* 

Problem: 
Return the factorial of the provided integer.

Requirements:
If the integer is represented with the letter n, a factorial is the product of all positive integers less than or equal to n.
Factorials are often represented with the shorthand notation n!
For example: 5! = 1 * 2 * 3 * 4 * 5 = 120

If the number is equal to zero, it should return 1.
If less than zero, should return NaN.

*/

function factorialize( num ) {
    if ( num < 0 ) {
        return NaN; 
    } else if ( num == 0 ) {
        return 1;
    } else {
        return num * ( factorialize( num - 1 )); 
    }
}

factorialize(5); // should return a number.
factorialize(5); // should return 120.
factorialize(10); // should return 3628800.
factorialize(20); // should return 2432902008176640000.
factorialize(0); // should return 1. 

/*

FreeCodeCamp: https://www.freecodecamp.org/challenges/factorialize-a-number

*/