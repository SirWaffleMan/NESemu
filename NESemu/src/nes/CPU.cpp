#include "CPU.h"


void CPU::tick()
{
	char byte;
	rom->readByte(&byte, PC);
	PC++;
}

CPU::CPU(ROM* rom) : rom(rom), A(0), X(0), Y(0), S(0), PC(0)
{}
