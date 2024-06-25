#include <stdio.h>
#include <stdlib.h>

int  filingStatus()
{
	int filingStatusCode = 1;
	printf("What is your filing status? \n 1) single \n 2) married, filing jointly \n 3) married, filing separately\n");
	scanf_s("%d", &filingStatusCode);
	return filingStatusCode;
}


int children()
{
	int childrenCode = 1;
	printf("How many children do you have?");
	scanf_s("%d", &childrenCode);
	return childrenCode;
}

int CountTaxableIncome()
{
	int income = 0;
	int filingStatusCode = 1;
	int childrenCode = 0;
	int taxableIncome = 0;


	printf("Enter your annual income:");
	scanf_s("%d", &income);
	if (income <= 0)
	{
		printf("u need not tax");
		exit;
	}
	else
	{
		filingStatusCode = filingStatus();
	}


	//if (filingStatusCode == 2)
	//{
	//	childrenCode = children();
	//	taxableIncome = income - (11400 + (2 + childrenCode) * 3650);
	//}
	//else if (filingStatusCode == 1) or (filingStatusCode == 3);
	//{
	//	taxableIncome = income - 5700;
	//}

	switch (filingStatusCode)
	{
	case 1 :
		taxableIncome = income - 5700;
		break;
	case 3:
		taxableIncome = income - 5700;
		break;
	case 2:
		childrenCode = children();
		taxableIncome = income - (11400 + (2 + childrenCode) * 3650);
		break;
	default:
		printf("incorrect case\n");
	}

	return taxableIncome;
}

float OrderTax(taxableIncome)
{
	float Tax = 0;
	if (taxableIncome <= 0)
	{
		printf("u need not tax\n");
		Tax = 0;
		exit;
	}
	else if (taxableIncome < 16750)
	{
		Tax = 0.1 * taxableIncome;
	}
	else if (taxableIncome < 68000)
	{
		Tax = 1675 + 0.15 * taxableIncome;
	}
	else if (taxableIncome < 137300)
	{
		Tax = 9362.5 + 0.25 * taxableIncome;
	}
	else if (taxableIncome >= 137300)
	{
		Tax = 26687.5 + 0.28 * taxableIncome;
	}

	return Tax;
}

//int main()
//{
//	int taxableIncome = 0;
//	float Tax = 0;
//
//
//	taxableIncome = CountTaxableIncome();
//	Tax = OrderTax(taxableIncome);
//	printf("u tax is%f", Tax);
//
//	return 0;
//}