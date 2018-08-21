#include "cprogressbar.h"

ConsoleProgressBar::ConsoleProgressBar (unsigned int width) {
  total = width;
  bar = (char *)malloc(total*sizeof(unsigned char));
  for (unsigned int i = 0; i < total; ++i)
    bar[i] = ' ';
}

ConsoleProgressBar::ConsoleProgressBar () : ConsoleProgressBar::ConsoleProgressBar (100) {}

void ConsoleProgressBar::print (){
  for (unsigned int i = 0; i < total+2; ++i)
    std::cout << "\b";
  std::cout << startChar;
  std::cout << bar;
  std::cout << endChar;
  std::cout.flush();
}

void ConsoleProgressBar::tick() {
  bar[progress] = tickChar;
  if(progress < total)
    progress++;
  print();
}
