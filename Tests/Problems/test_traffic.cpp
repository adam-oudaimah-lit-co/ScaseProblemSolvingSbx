#include <fstream>
#include <iostream>

#include "traffic.h"

TEST(Traffic, Traffic)
{
  std::ifstream inf("traffic.in");
  std::ifstream outf("traffic.out");
  if (!inf.is_open() || !outf.is_open())
  {
    FAIL() << "Error opening test file";
  }
  double maxTestDuration = 0.0; //The duration of the maximum test of the test case
  int numberOfTestCases;
  inf >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    std::vector<int> sequence;
    for (int k = 0; k < 4; k++)
    {
      int num;
      inf >> num;
      sequence.push_back(num);
    }
    std::string expectedAnswer;
    outf >> expectedAnswer;
	
	clock_t begin = clock();
	
    EXPECT_EQ(Traffic::Light(sequence), expectedAnswer);
	
	clock_t end = clock();
	
	double testDuration = (double)(end - begin);
	
	maxTestDuration = std::max(testDuration, maxTestDuration);
  }
  std::cout << "The max test duration (in ms) was: ";
  std::cout << maxTestDuration;
  std::cout << "\n";
}