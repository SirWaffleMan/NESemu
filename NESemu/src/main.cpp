#include <iostream>
#include <SDL.h>
#include "graphics/Window.h"

int main(int argc, char* argv[]) {
	// Initialize SDL
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		std::cerr << "Failed to initiaize SDL!" << std::endl;
		return 1;
	}

	// Create Window
	Window window("NESemu", 256, 240);

	// Run window
	window.run();

	return 0;
}