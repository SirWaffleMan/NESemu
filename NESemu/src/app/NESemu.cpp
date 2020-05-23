#include "NESemu.h"

NESemu::NESemu(std::string romDir) : romDirectory(romDir)
{
	m_nes_window = new Window("NESemu", 256, 240);
	m_nes = new NES();
}

NESemu::~NESemu()
{
	// Close SDL
	SDL_DestroyRenderer(m_nes_window->getRenderer());
	SDL_DestroyWindow(m_nes_window->getWindow());
	SDL_Quit();

	// Delete pointers
	delete m_nes_window;
	delete m_nes;
}

void NESemu::run()
{

	SDL_Event event;
	bool exit = false;

	while (!exit) {

		/* HANDLE EVENTS */
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				exit = true;
			}
		}

		/* RENDER SCREEN */
		// Clear the screen
		SDL_RenderClear(m_nes_window->getRenderer());
		// Render Screen
		SDL_RenderPresent(m_nes_window->getRenderer());
	}
}
