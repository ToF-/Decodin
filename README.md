# RLDEC - Run Length Decoding

http://www.spoj.com/problems/RLDEC/

Your task is to write a program that decodes a sequence of characters which was encoded using a simple form of run-length encoding, as described by the rules below.

Any sequence of between 2 to 9 identical characters is encoded by two characters. The first character is the length of the sequence, represented by one of the characters 2 through 9. The second character is the value of the repeated character. A sequence of more than 9 identical characters is dealt with by first encoding 9 characters, then the remaining ones.

Any sequence of characters that does not contain consecutive repetitions of any characters is represented by a 1 character followed by the sequence of characters, terminated with another 1. If a 1 appears as part of the sequence, it is escaped with a 1, thus two 1 characters are output.

##Input

The first line in the input contains a number T ≤ 200 which specifies the number of test cases to follow. Each test case consists of one line with the encoding of a sequence of characters. Each line consists of letters (both upper- and lower-case), digits, spaces, and punctuation and is terminated with a newline character. No other characters appear in the input. You may assume that each line is a valid encoding of some sequence of characters.

##Output

For each line in the input print one line with the decoded sequence of characters.

##Example

###Input:

    3
    9A1ABC131
    1112 3124
    1112111

###Output:

    AAAAAAAAAABC111
    12 344
    121
