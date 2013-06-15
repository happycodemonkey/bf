#include "bf.h"

int outputArray[1024] = { };

Bf::Bf() {
  i = 0;
  input = "";
  loopStart = 0;
  bfindex = 0;

  log.setFilename("carrie_log.txt");
}

std::string Bf::interpret(std::string input) {
  this->input = input;
  this->output = "";

  for (i = 0; i < input.length(); i++) {
    token = input[i];
    getNextChar(token);
  }

  return output;
}

void Bf::getNextChar(char token) {		

  if (token == '>') {
    bfindex++;
  }
	
  if (token == '<') {
    bfindex--;
  }
	
  if (token == '+') {
    outputArray[bfindex]++;
  }
		
  if (token == '-') {
    outputArray[bfindex]--;
  }
		
  if (token == '.') {
    output += outputArray[bfindex];
  }
		
  if (token == '[') {
    loopStart = i;
    while (outputArray[bfindex]) {
      getNextChar(input[++i]);
    }
		      
  }
  if (token == ']') {
    if (outputArray[bfindex]) {
      i = loopStart;
    }
  }
}
