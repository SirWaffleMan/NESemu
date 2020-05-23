#include <iostream>
#include <SDL.h>
#include "app/NESemu.h"
#include "graphics/Window.h"

int main(int argc, char* argv[]) {

	if (argc <= 1) {
		std::cerr << "No command line argument found. Please specify ROM directory!" << std::endl;
		return 1;
	}

	// Initialize SDL
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		std::cerr << "Failed to initiaize SDL!" << std::endl;
		return 1;
	}

	// Create and run application
	NESemu app(argv[1]);
	app.run();

	return 0;
}