#include <iostream>
#include <cstdlib>
#include <cmath>
#include <chrono>
#include <thread>

#ifndef CPROGRESSBAR_H_
# define CPROGRESSBAR_H_

class ConsoleProgressBar {
    unsigned int width, steps, percent, progress = 0;
    unsigned int backPrintOffset = 3;
    bool displayPercentage = false;
    char * bar;
  public:
    char tickChar = '.', startChar = '[', endChar = ']';
    ConsoleProgressBar(unsigned int);
    ConsoleProgressBar(unsigned int, unsigned int);
    ConsoleProgressBar(unsigned int, unsigned int, bool);
    void print();
    void tick(unsigned int);
};

#endif /* !CPROGRESSBAR_H_ */
