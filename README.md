# Exact-Appearance-of-Motif
Input: - A set of k strings S1, S2, …… Sk   with |S1| = |S2| = ….. |Sk| = m and positive integer L which is length of pattern string X. 
Description: - The main purpose of the algorithm is to find the exact matching of that X with that length in list of given string and 
to find out the position of that pattern. If pattern or Motif is not visible in any of the string, it will prompt as no occurrence of the Motif. 
If its found it will return that common Motif.
Step 1: - First we will initialize char array to represent list of string where we will find the pattern 
Step 2: - Declare the pattern length L. 
Step 3: - Here two loops will be used. Outer loop is used to iterate each string of length m. 
Step 4: Inner loop will be used to check each character of the Si string with Motif of length L. 
Step 5: Compare X with Si to check whether it’s a substring of main string.  
Step 6:  If it is present, mark the position of pattern in the string. 
Step 7: If its not present, return that No exact appearance of a common motif. 
Runtime Analysis:  For each string Si, since its length is m, this 
comparison of X and Si can be done in time O(m+L) For the time complexity O(m+L). 
Totally the algorithm takes time (m-L+1) x (k-1) x (m+L) = O(km2)
