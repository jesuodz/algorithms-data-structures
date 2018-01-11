"""
Problem: 
Return the factorial of the provided integer.

Requirements:
If the integer is represented with the letter n, a factorial is the product of all positive integers less than or equal to n.
Factorials are often represented with the shorthand notation n!
For example: 5! = 1 * 2 * 3 * 4 * 5 = 120

If the number is equal to zero, it should return 1.
If less than zero, should return NaN.
"""

def factorial( n ):
    if n < 0:
        return None
    elif n == 0:
        return 1
    else:
        return n * factorial( n - 1 )

print( factorial( 5 )) # 120
print( factorial( -1 )) # None
print( factorial( 0 )) # 1
print( factorial( 120 )) # 6.689502913449124e+198