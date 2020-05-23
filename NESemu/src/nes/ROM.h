#pragma once
#include <string>
#include <fstream>

class ROM {
private:
	std::string romDirectory;
	std::ifstream* inFileStream;
public:
	ROM(std::string romDir);
	~ROM();
	void readByte(char* result, int seek);
	void readBytes(char* result, int seek, int size);
};