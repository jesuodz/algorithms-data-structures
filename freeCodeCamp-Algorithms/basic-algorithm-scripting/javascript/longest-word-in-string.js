/*
Problem: 
Find the longest word in a string

Description:
Return the length of the longest word in the provided sentence.
Your response should be a number.

*/

function findLongestWord( str ) {
    str = str.split(' ');

    var longest = 0;

    for  (var i=0; i < str.length; i++ ) {
        if ( str[i].length > longest ) {
            longest = str[i].length;
        }
    }

    return longest();
}

findLongestWord("The quick brown fox jumped over the lazy dog"); // should return a number.
findLongestWord("The quick brown fox jumped over the lazy dog"); // should return 6.
findLongestWord("May the force be with you"); // should return 5.
findLongestWord("Google do a barrel roll"); // should return 6.

/*

FreeCodeCamp: https://www.freecodecamp.org/challenges/find-the-longest-word-in-a-string

*/
