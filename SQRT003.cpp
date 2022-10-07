#include <math.h>
#include <stdio.h>
 
// Function to find the square-root of N
double findSQRT(double N) { return pow(2, 0.5 * log2(N)); }
 
// Driver Code
int main()
{
 
    // Given number
    int N = 12;
 
    // Function call
    printf("%f ", findSQRT(N));
    return 0;
}
