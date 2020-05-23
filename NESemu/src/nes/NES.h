#pragma once
#include "CPU.h"
#include "PPU.h"
#include "APU.h"

class NES {
private:
	CPU* cpu;
	PPU* ppu;
	APU* apu;
public:
	NES();
	~NES();
};