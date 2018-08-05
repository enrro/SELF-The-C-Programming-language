How would you test the word count program? What kinds of
input are most likely to uncover bugs if there are any?

I would try this program with 
It sounds like they are really trying to get the programmers to learn how to do a unit test. I would submit the following: 

0. input file contains zero words 
1. input file contains 1 enormous word without any newlines 
2. input file contains all white space without newlines 
3. input file contains 66000 newlines 
4. input file contains word/{huge sequence of whitespace of different kinds}/word 
5. input file contains 66000 single letter words, 66 to the line 
6. input file contains 66000 words without any newlines 
