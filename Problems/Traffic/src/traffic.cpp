#include "traffic.h"

std::string Traffic::Light(const std::vector<int>& sequence)
{
	int temp = sequence[1]; //The variable that will hold the value of summing the time of each light
	int idx = 1; //The light that we stopped at the last iteration
	int iterator = 2;
	while (sequence[0] > temp)
	{
		if (iterator % 4 == 0)
			iterator = 1;
		temp += sequence[iterator % 4];
		idx = iterator%4;
		iterator++;
	}

	if (temp%sequence[0] != 0)
	{
		if (idx == 1)
			return "green";
		else
		{
			if (idx == 2)
			{
				return "yellow";
			}
			else
			{
				return "red";
			}
		}
	}
	else
	{
		if (idx == 1)
			return "yellow";
		else
		{
			if (idx == 2)
			{
				return "red";
			}
			else
			{
				return "green";
			}
		}
	}
}
