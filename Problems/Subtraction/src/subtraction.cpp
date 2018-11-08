#include "subtraction.h"

int Subtraction::GetMaxNumber(const std::vector<int>& sequence)
{
	if (sequence.size() >= 2)
	{
		int result = sequence[1]; //the variable that contains the value of the subtraction from the second element to the last one
		for (int iterator = 2; iterator < sequence.size(); iterator++)
		{
			result -= sequence[iterator];
		}
		result = sequence[0] - (result);
		return result;
	}
	else
	{
		return sequence[0];
	}
}
