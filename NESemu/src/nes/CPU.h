#pragma once
#include "ROM.h"
/*
	6502 NTSC NES/Famicom

	Wikipedia: https://en.wikipedia.org/wiki/Ricoh_2A03
	NesDev wiki: http://wiki.nesdev.com/w/index.php/CPU
*/
class CPU {
private:
	/* CLOCK */
	const int MASTER_CLOCK_FREQUENCY = 21477272;
	const int CLOCK_DIVISOR = 12;
	const int CLOCK_FREQUENCY = MASTER_CLOCK_FREQUENCY / CLOCK_DIVISOR;
	const int CLOCK_CYCLE = 1 / CLOCK_FREQUENCY;
	/* REGISTERS */
	unsigned char A;		// Accumulator
	unsigned char X;		// Indexes
	unsigned char Y;
	unsigned char S;		// Stack Pointer
	unsigned short int PC;	// Program Counter
	bool P[6] = {			// Status Register
		false,	// Carry
		false,	// Zero
		false,	// Interrupt enable/ disable
		false,	// Decmial Mode
				// 4, 5 Dont exist
		false,	// Overflow
		false	// Negative
	};
	/* NES COMPONENTS */
	ROM* rom;
public:
	void tick();
	CPU(ROM*);
};