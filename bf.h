#ifndef BF_H
#define BF_H

#include <string>
#include <iostream>
#include "log.h"

class Bf {

 public:
  Bf();
  std::string interpret(std::string input);

 private:
  void getNextChar(char token);

  std::string input;
  std::string output;
  char token;
  int i;
  int loopStart; 
  int bfindex;
  Log log;
};

#endif
