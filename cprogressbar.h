#include <iostream>
#include <cstdlib>

#ifndef CPROGRESSBAR_H_
# define CPROGRESSBAR_H_

class ConsoleProgressBar {
    unsigned int total, progress = 0;
    char * bar;
  public:
    char tickChar = '.', startChar = '[', endChar = ']';
    ConsoleProgressBar();
    ConsoleProgressBar(unsigned int);
    void print();
    void tick();
};

#endif /* !CPROGRESSBAR_H_ */
