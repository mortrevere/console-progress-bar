#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

#include "cprogressbar.h"

int main(int argc, char const *argv[])
{
  ConsoleProgressBar pb;
  unsigned int percent, total = 987654321; //the total number of loop iterations until completion

  percent = std::floor(total/100);

  for(unsigned int i = 0; i < total; i++){
    if(i%percent == 0)
    {
      pb.tick();
      pb.print();
    }
  }

  std::cout << std::endl;

  return 0;
}
