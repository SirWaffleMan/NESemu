#pragma once
#include <string>
#include "CPU.h"
#include "PPU.h"
#include "APU.h"
#include "ROM.h"

class NES {
private:
	CPU* cpu;
	PPU* ppu;
	APU* apu;
	ROM* rom;
public:
	NES(std::string romDir);
	~NES();
	void tick();
};