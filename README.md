# console-progress-bar
C++ lib to integrate a simple progress bars in any terminal application

## Usage

```cpp
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
```

The full prototype to instantiate a ConsoleProgressBar is :

```cpp
ConsoleProgressBar(unsigned int _nsteps, unsigned int _width = 100, bool _displayPercentage = false);
```

Filling the progress bar is done by calling its `tick` method : 

```cpp
.tick(unsigned int _currentStep)
```

The bar is at 100% when `_currentStep == _nsteps`. 

See the [example](example.cpp).

## Try it

```
git clone https://github.com/mortrevere/console-progress-bar.git && cd console-progress-bar && ./compile-run-example.sh
```
