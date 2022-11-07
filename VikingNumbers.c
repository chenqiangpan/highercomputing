#include <stdio.h>

#define VIKING_20 20

void SpecialNumberBeforeTwenty(int value);
void NumberBeforeVikingHundred(int value);
void NumberBeforeVikingTwoHundred(int value);

int main()
{
	int inputValue;
	printf("Please input a value: ");
	scanf("%d",&inputValue);

	if(inputValue < 20)
	{

	  SpecialNumberBeforeTwenty(inputValue);

	}
	else if(inputValue <120)
	{
	  NumberBeforeVikingHundred(inputValue);
	}
	else if(inputValue < 240)
	{
	  NumberBeforeVikingTwoHundred(inputValue);
	}
	else
	{
		printf("something else!");
	}

	return 0;
}

void NumberBeforeVikingTwoHundred(int value)
{
	if(value ==120)
	{
		printf("hundred");
	}
	else
	{
		printf("hundred ok ");
		NumberBeforeVikingHundred(value -120);
	}
}

void NumberBeforeVikingHundred(int value)
{
	if(value %10 == 0)
	{
		if(value == 20)
		{
			printf("tuttugu");
		}
		else
		{
			SpecialNumberBeforeTwenty(value/10);
			printf("tigir");
		}
	}
	else
	{
		if(value < 30)
		{
			printf("tuttugu ok ");
			SpecialNumberBeforeTwenty(value%10);
		}else
		{
			SpecialNumberBeforeTwenty(value/10);
			printf("tigir");
			SpecialNumberBeforeTwenty(value%10);
		}
	}
}


void SpecialNumberBeforeTwenty(int value)
{

if(value ==1)
	{
	printf(" ein ");
	}else if(value ==2)
	{
	printf(" tveir ");
	}else if(value ==3)
	{
	printf(" þrír ");
	}else if(value ==4)
	{
	printf(" fjórir ");
	}else if(value ==5)
	{
	printf(" fimm ");
	}else if(value ==6)
	{
	printf(" sex ");
	}else if(value ==7)
	{
	printf(" sjau ");
	}else if(value ==8)
	{
	printf(" átta ");
	}else if(value ==9)
	{
	printf(" níu ");
	}else if(value ==10)
	{
	printf(" tíu ");
	}else if(value ==11)
	{
	printf(" ellifu ");
	}else if(value ==12)
	{
	printf(" tólf ");
	}else if(value ==13)
	{
	printf(" þrettán ");
	}else if(value ==14)
	{
	printf(" fjórtán ");
	}else if(value ==15)
	{
	printf(" fimtán ");
	}else if(value ==16)
	{
	printf(" sextán ");
	}else if(value ==17)
	{
	printf(" sjaután ");
	}else if(value ==18)
	{
	printf(" átján ");
	}else if(value ==19)
	{
	printf(" nítján ");
	}

}

