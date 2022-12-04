#include <stdio.h>
#include <limits.h>

typedef unsigned char byte;

int main (int argc, const char * argv[])
{
	byte *pointer; //giving type by example

	byte b1 =1;
	byte b2 =2;
	int i1 = 0;
	int i2 = 0;
	byte b3 =3;
	byte b4 =4;
	byte b5 =5;
	byte b6 =6;

	pointer = &b6;
	printf("pointer has value of %p \n ", pointer);
	printf("the byte it points to contains %d\n",*pointer);

	printf("b1 (%p) = %x\n", &b1, b1);
	printf("b2 (%p) = %x\n", &b2, b2);
	printf("i1 (%p) = %d\n", &i1, i1);
	printf("i2 (%p) = %d\n", &i2, i2);
	printf("b3 (%p) = %x\n", &b3, b3);
	printf("b4 (%p) = %x\n", &b4, b4);
	printf("b5 (%p) = %x\n", &b5, b5);
	printf("b6 (%p) = %x\n", &b6, b6);
}
