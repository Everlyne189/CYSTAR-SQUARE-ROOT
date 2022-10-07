METHOD 1: Using inbuilt sqrt() function: The sqrt() function returns the sqrt of any number N.
METHOD 2: Using Binary Search: This approach is used to find the square root of the given number N with precision upto 5 decimal places. 

The square root of number N lies in range 0 ≤ squareRoot ≤ N. Initialize start = 0 and end = number.
Compare the square of the mid integer with the given number. If it is equal to the number, then we found our integral part, else look for the same in the left or right side of mid depending upon the condition.
After finding an integral part, we will find the fractional part.
Initialize the increment variable by 0.1 and iteratively calculate the fractional part upto 5 decimal places.
For each iteration, change increment to 1/10th of its previous value.
Finally, return the answer computed.
Method 3: Using log2(): The square-root of a number N can be calculated using log2() as: 
 

Let d be our answer for input number N, then  

d = N^{\frac{1}{2}}    

Apply log2() both sides 

log2(d) = log2(N^{\frac{1}{2}})     

log2(d) = {\frac{1}{2}}*log2(N)     

d = 2^{{\frac{1}{2}}*log2(N)}
METHOD 4: The program allows the program allows the user to enter an integer value and the integer value and finds the square root of the number using ARITHMETIC OPERATOR.
