#include "NES.h"

#include <iostream>

NES::NES(std::string romDir)
{
	ppu = new PPU();
	apu = new APU();
	rom = new ROM(romDir);
	cpu = new CPU(rom);
}

NES::~NES()
{
	delete cpu;
}

void NES::tick()
{
	cpu->tick();
	for (int i = 0; i < 3; i++) {
		ppu->tick();
	}
	apu->tick();
}
