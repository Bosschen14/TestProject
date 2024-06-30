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


	for (int i = 0; i < NumMovies; i++)
	{
		//printf("gross[%d]:%.0lf ", i, gross[i]);
		//printf("names[%d]:%s\n", i, names[i]);
		if (gross[i] > highestGross)
		{
			//printf("i%d", i);
			highestGrossIndex = i;
			highestGross = gross[highestGrossIndex];
		}
		//printf("highestGrossIndex%d\n", highestGrossIndex);
	}
	//printf("names[highestGrossIndex]%s", names[highestGrossIndex]);
	if (names[highestGrossIndex] == "")
	{
		printf("No movies\n");
	}
	else
	{
		printf("film is: %s\n", names[highestGrossIndex]);
	}
	
	
	return 0;
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
	printf("The highest gross  is ");
	highestNum(gross,names);



	double maxGross[MaxGrosses] = { 500000, 1000000, 2000000, 4000000, 10000000 };



	for (int i = 0; i < MaxGrosses; i++)
	{
		int k = 0;

		double remainingGross[NumMovies] = { 0,0,0,0,0,0,0,0,0,0 };
		char* remainingNames[NumMovies] = { "","","","","","","","","","" };


		for (int j = 0; j < NumMovies; j++)
		{	

			if (gross[j] < maxGross[i])
			{

				//printf("gross[j%d]%lf\n", j,gross[j]);
				remainingGross[k] = gross[j];
				remainingNames[k] = names[j];
				//printf("remainingNamest[%d] = %s\n", k, remainingNames[k]);
				k++;

			}
		}
		printf("The highest gross less than %.0lf is ", maxGross[i]);
		highestNum(remainingGross, remainingNames);
		//printf("at %.0lf");

	}
}

