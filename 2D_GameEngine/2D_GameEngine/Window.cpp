#include "stdafx.h"
#include "Window.h"
#include "SDL.h"
#include "SDL_syswm.h"
#include <Windows.h>
#include <iomanip>
#include "InputManager.h"

Window::Window(Vector vector)
{
	SDL_Init(SDL_INIT_EVERYTHING);

	window = SDL_CreateWindow("Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		vector.x, vector.y, SDL_WINDOW_SHOWN);

	SDL_GetWindowWMInfo(window, &m_inf);

	m_WindowHandle = m_inf.info.win.window;
	scene = new Scene(window);

	quit = false;
}

void Window::Run(InputManager *inputManager)
{
	scene->SetUp();


	while (!quit)
	{
		inputManager->Update();

		scene->Update();

		scene->Draw();
	}
}

SDL_Window *Window::GetWindow()
{
	return window;
}

bool Window::keyReleased(const OIS::KeyEvent &e)
{
	if (e.key == OIS::KC_ESCAPE)
	{
		TTF_Quit();
		SDL_Quit();

		quit = true;
		return true;
	}
	else
		return false;
}

bool Window::keyPressed(const OIS::KeyEvent &e)
{
	if (e.key == OIS::KC_ESCAPE)
	{
		TTF_Quit();
		SDL_Quit();

		quit = true;
		return true;
	}
	else
		return false;
}