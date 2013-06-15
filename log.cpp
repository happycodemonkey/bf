#include "log.h"
#include <ios>

Log::Log() {
	//don't need to do anything
}

void Log::setFilename(string filename) {
	this->filename = filename;
}

void Log::log_msg(char msg[]) {
  ofstream logfile;
  logfile.open(filename.c_str(),ios_base::app);
  if (logfile.is_open())
  {
    cout << msg << endl;
    logfile << msg << "\n";
    logfile.close();
  }
  else cout << "Unable to open file";
}


void Log::log_msg(string msg) {
  ofstream logfile;
  logfile.open(filename.c_str(),ios_base::app);
  if (logfile.is_open())
  {
    cout << msg << endl;
    logfile << msg << "\n";
    logfile.close();
  }
  else cout << "Unable to open file";
}

void Log::log_msg(int msg) {
  ofstream logfile;
  logfile.open(filename.c_str(),ios_base::app);
  if (logfile.is_open())
  {
    cout << msg << endl;
    logfile << msg << "\n";
    logfile.close();
  }
  else cout << "Unable to open file";
}
