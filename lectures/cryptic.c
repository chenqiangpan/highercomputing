#include <stdio.h>
#include <stdlib.h>
typedef char byte;


int main(int argc, char * argv[])
{

	byte myChar;

	scanf("%c",&myChar);
	printf("your letter memory addres is %p \n", &myChar );

	printf("your main address is %p", &main);	
	return 0;
}
