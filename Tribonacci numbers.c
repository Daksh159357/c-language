#include<stdio.h>
void printTribonacci(int n) 
{
	int a = 0, b = 1, c = 1, d = a + b + c;
	printf("%d, %d, %d", a, b, c);
	for (int i = 4; i <= n; i++) 
	{
		printf(", %d", d);
		a = b;
		b = c;
		c = d;
		d = a + b + c;
	}
}

int main()
{
	int n = 10; 
	printTribonacci(n);
	return 0;
}
