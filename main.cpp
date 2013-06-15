#include "bf.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	Bf bf;

	string input;
	cout << "Input your bf program: " << endl;
	cin >> input;

	string output = bf.interpret(input);
	cout << output;

}
