#include "ROM.h"

ROM::ROM(std::string romDir) : romDirectory(romDir)
{
	// Open ROM file in binary mode
	inFileStream = new std::ifstream(romDir, std::ios::binary);
}

ROM::~ROM()
{
	delete inFileStream;
}

void ROM::readByte(char* result, int seek)
{
	inFileStream->seekg(seek);
	inFileStream->read(result, 1);
}

void ROM::readBytes(char* result, int seek, int size)
{
	inFileStream->seekg(seek);
	inFileStream->read(result, size);
}
