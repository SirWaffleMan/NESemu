#include "Window.h"
#include <iostream>

void Window::run()
{
	while (true) {
		// Clear the screen
		SDL_RenderClear(m_sdl_renderer);
		// Render Screen
		SDL_RenderPresent(m_sdl_renderer);
		// Wait delay
		SDL_Delay(1000);
	}
}

Window::Window(std::string title, int width, int height) : m_title(title), m_width(width), m_height(height)
{
	if (!init()) {
		//TODO: Handle error
	}
}

bool Window::init()
{
	// Create SDL window
	m_sdl_window = SDL_CreateWindow(
		m_title.c_str(),
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		m_width,
		m_height,
		0
	);
	if (m_sdl_window == nullptr) {
		std::cerr << SDL_GetError() << std::endl;
		SDL_Quit();
		return false;
	}

	// Create SDL renderer
	m_sdl_renderer = SDL_CreateRenderer(m_sdl_window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (m_sdl_renderer == nullptr) {
		std::cerr << SDL_GetError() << std::endl;
		SDL_DestroyWindow(m_sdl_window);
		SDL_Quit();
		return false;
	}

	return true;
}
