#include <fstream>
#include <iostream>
#include <ctime>

#include "gears.h"

TEST(Gears, Gears)
{
  std::ifstream inf("gears.in");
  std::ifstream outf("gears.out");
  if (!inf.is_open() || !outf.is_open())
  {
    FAIL() << "Error opening test file";
  }
  double maxTestDuration = 0.0; //The duration of the maximum test of the test case
  int numberOfTestCases;
  inf >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    int nOfGears;
    inf >> nOfGears;
    std::vector<int> gears;
    for (int k = 0; k < nOfGears; k++)
    {
      int teeth;
      inf >> teeth;
      gears.push_back(teeth);
    }
    int expectedAnswer;
    outf >> expectedAnswer;
	
	clock_t begin = clock();
	
    EXPECT_EQ(Gears::GetNumberOfDistinctPairs(gears), expectedAnswer);
	
	clock_t end = clock();
	
	double testDuration = (double)(end - begin);

	maxTestDuration = std::max(testDuration, maxTestDuration);
  }
  std::cout << "The max test duration (in ms) was: ";
  std::cout << maxTestDuration;
  std::cout << "\n";
}