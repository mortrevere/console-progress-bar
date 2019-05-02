g++ -Wall -std=c++11 -c *.cpp
g++ *.o -o cprogressbar-example
rm -rf ./*.o
./cprogressbar-example
rm cprogressbar-example
