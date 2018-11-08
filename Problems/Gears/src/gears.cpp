#include "gears.h"


int Gears::GetNumberOfDistinctPairs(const std::vector<int>& gears)
{
	int counter = 0; //The variable that will hold the value of the piar gears
	for (int iterator = 0; iterator < gears.size()-1; iterator++)
	{
		for (int j = iterator+1; j < gears.size(); j++)// To compare each gear with the other gears
		{
			if (gears[iterator] % gears[j] == 0 || gears[j] % gears[iterator] == 0)
			{
				counter++;
			}
		}
	}
  return counter;
}
