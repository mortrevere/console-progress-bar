#include "cprogressbar.h"

ConsoleProgressBar::ConsoleProgressBar (unsigned int _nsteps, unsigned int _width, bool _dispPercent) {
  width = _width;
  steps = _nsteps;
  displayPercentage = _dispPercent;

  if(displayPercentage)
    backPrintOffset = 6;

  bar = (char *)malloc(width*sizeof(unsigned char));
  for (unsigned int i = 0; i < width; ++i)
    bar[i] = ' ';
}

ConsoleProgressBar::ConsoleProgressBar (unsigned int _nsteps, unsigned int _width) : ConsoleProgressBar::ConsoleProgressBar (_nsteps, _width, false) {}

ConsoleProgressBar::ConsoleProgressBar (unsigned int _nsteps) : ConsoleProgressBar::ConsoleProgressBar (_nsteps, 100, false) {}

void ConsoleProgressBar::print (){
  if(progress == width && displayPercentage)
    backPrintOffset = 10;

  for (unsigned int i = 0; i < width+backPrintOffset; ++i)
    std::cout << "\b";
  std::cout << startChar;
  std::cout << bar;
  std::cout << endChar;
  if(displayPercentage)
    std::cout << ' ' << progress*100/width << '%';
  std::cout.flush();
  std::this_thread::sleep_for(std::chrono::milliseconds(1));
}

void ConsoleProgressBar::tick(unsigned int currentStep) {
  percent = std::floor(steps/width);
  if(currentStep%percent == 0) {
    if(progress < width) {
      bar[progress] = tickChar;
      progress++;
    }
    print();
  }
}
