#include <stdio.h>

#define RATE2 0.02
#define RATE3 0.03
#define RATE4 0.04
#define RATE5 0.05
#define RATE6 0.06
#define RATE7 0.07


float CalculatorYearSaving(float m, float r);

int main ()
{

float MonthSaving;
float YearSaving;

printf("what is your monthly saving?");

scanf("%f",&MonthSaving);

YearSaving = CalculatorYearSaving(MonthSaving, RATE2);


printf("Monthly savings of $ %4.2f , with monthly compounded interest: \n", MonthSaving);

printf ("With month rate %f, the year saving would be %f. \n", RATE2, YearSaving);

return 0;

}


float CalculatorYearSaving(float monthSaving, float monthRate) 
{

	float yearSaving =0;

	for (int i = 0; i<12; i ++)
	{
		monthSaving = monthSaving * (1+ monthRate/12);
		yearSaving += monthSaving;
	}

	return yearSaving;

}

