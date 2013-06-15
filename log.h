#ifndef LOG_H
#define LOG_H 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Log {
	public:
		Log();
		void setFilename(string filename);
		void log_msg(char msg[]);
		void log_msg(string msg);
		void log_msg(int msg);

	private:
		string filename;
};

#endif
