#include <fstream>
#include <iostream>

#include "subtraction.h"

TEST(Subtraction, Subtraction)
{
  std::ifstream inf("subtraction.in");
  std::ifstream outf("subtraction.out");
  if (!inf.is_open() || !outf.is_open())
  {
    FAIL() << "Error opening test file";
  }
  double maxTestDuration = 0.0; //The duration of the maximum test of the test case
  int numberOfTestCases;
  inf >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    int seqSize;
    inf >> seqSize;
    std::vector<int> sequence;
    for (int k = 0; k < seqSize; k++)
    {
      int num;
      inf >> num;
      sequence.push_back(num);
    }
    int expectedAnswer;
    outf >> expectedAnswer;
	
	clock_t begin = clock();
	
    EXPECT_EQ(Subtraction::GetMaxNumber(sequence), expectedAnswer);
	
	clock_t end = clock();
	
	double testDuration = (double)(end - begin);

	maxTestDuration = std::max(testDuration, maxTestDuration);
  }
  std::cout << "The max test duration (in ms) was: ";
  std::cout << maxTestDuration;
  std::cout << "\n";
}