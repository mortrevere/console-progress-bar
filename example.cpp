#include "cprogressbar.h"

int main(int argc, char const *argv[])
{
  unsigned int total = 98765432; //the total number of loop iterations until completion
  ConsoleProgressBar pb(total, 25, true);

  for(unsigned int i = 0; i < total; i++){
    pb.tick(i);
  }

  std::cout << std::endl;

  return 0;
}
