#include "NES.h"

NES::NES()
{
	cpu = new CPU();
	ppu = new PPU();
	apu = new APU();
}

NES::~NES()
{
	delete cpu;
}
