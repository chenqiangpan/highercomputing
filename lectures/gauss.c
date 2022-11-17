#include <stdio.h>
#include <stdlib.h>


int sumToN(int n);

int main(int argc, char *argv[])
{
	int n;

	printf("Enter a number\n");
	scanf("%d",&n);


	printf("sum 0 to %d = %d\n", n,sumToN(n));
	return EXIT_SUCCESS;

}

int sumToN(int n)
{
	int result;

	if(n==0)
	{
		result = 0;
	}
	else
	{
		result = n + sumToN(n-1);	
	}

	return result;
}
