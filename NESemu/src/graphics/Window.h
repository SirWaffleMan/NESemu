#pragma once
#include <SDL.h>
#include <string>

class Window {
private:
	std::string m_title;
	int m_width;
	int m_height;

	SDL_Window* m_sdl_window = nullptr;
	SDL_Renderer* m_sdl_renderer = nullptr;
public:
	Window(std::string title, int width, int height);
	SDL_Renderer* getRenderer();
	SDL_Window* getWindow();
private:
	bool init();
};