#pragma once
#include <string>
#include "../graphics/Window.h"
#include "../nes/NES.h"

class NESemu {
private:
	Window* m_nes_window = nullptr;
	NES* m_nes = nullptr;

	std::string romDirectory;
public:
	NESemu(std::string romDir);
	~NESemu();
	void run();
};