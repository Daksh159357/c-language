#include <stdio.h>

void printFibonacci(int n) 
{
    int t1 = 0, t2 = 1, nextTerm = 0;

    printf("Fibonacci Series: %d, %d, ", t1, t2);
    nextTerm = t1 + t2;

    while(nextTerm <= n)
	 {
	        printf("%d, ",nextTerm);
	        t1 = t2;
	        t2 = nextTerm;
	        nextTerm = t1 + t2;
	}
}

int main() 
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printFibonacci(num);
    return 0;
}
