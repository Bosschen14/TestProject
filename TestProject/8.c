#include <stdio.h>

/*
 * Name : <Insert name>
 * Program to experiment with arrays
 */

#define NumMovies 10


#define MaxGrosses 5


int highestNum(double gross[], char* names[])
{
	int highestGrossIndex = 0;
	double highestGross = 0;
	highestGross = 0;
	for (int i = 0; i < NumMovies; i++)
	{
		if (gross[i] > highestGross)
		{
			highestGrossIndex = i;
			highestGross = gross[highestGrossIndex];
		}
	}
	printf("The highest grossing film is: %s\n", names[highestGrossIndex]);
}


int main()
{
	double gross[NumMovies] = { 4633070, 3856195, 3171189, 1877685, 3251622,
							   3156594, 1629735, 2659234, 2028036, 510768 };
	char *names[NumMovies] = { "Hall Pass", "Unknown", "I Am Number Four", "The King's Speech",
					 "Just Go With It", "Gnomeo and Juliet", "Drive Angry",
					 "Justin Beiber: Never Say Never", "Big Mommas: Like Father, Like Son",
					 "True Grit" };
	for (int i = 0; i < NumMovies; i++)
	{
		long sum = 0;        /* Initialize to zero */
		sum += gross[i];
		printf("Movie %2d %33s: %.0f\n", i + 1, names[i], gross[i]);
	}

	highestNum(gross,names);



	double maxGross[MaxGrosses] = { 500000, 1000000, 2000000, 4000000, 10000000 };
	for (int i = 0; i < MaxGrosses; i++)
	{
		int k = 0;
		for (int j = 0; j < NumMovies; j++)
		{	
			double remainingGross[NumMovies] ;
			char* remainingNames[NumMovies];
			if (gross[j] < maxGross[i])
			{
				printf("%d\n", j);
				printf("%d\n", i);
				printf("%lf\n", gross[j]);
				printf("%lf\n", maxGross[i]);
				remainingGross[k] = gross[j];
				remainingNames[k] = names[j];
				printf("Element[%d] = %s\n", k, remainingNames[k]);
				k++;

				highestNum(remainingGross, remainingNames);
			}
			

		}
	}
}

