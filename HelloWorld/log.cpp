#include <iostream>

class Log 
{
private:
	int m_LogLevel = LogLevelInfo; // Using m_ to indicate it is a private member variable

public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;

	void setLevel(int level) {
		m_LogLevel = level;
	}
	
	void info(const char* message) {
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}

	void error(const char* message) {
		if (m_LogLevel >= LogLevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}

	void warn(const char* message) {
		if (m_LogLevel >= LogLevelWarning)
			std::cout <<"[WARNING]: " << message << std::endl;
	}
};