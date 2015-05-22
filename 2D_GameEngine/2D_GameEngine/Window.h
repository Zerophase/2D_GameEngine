#ifndef WINDOW_H
#define WINDOW_H

#include "SDL.h"
#include "Vector2D.h"
#include "Scene.h"
#include "SDL_syswm.h"
#include "SDL_ttf.h"
#include "InputListener.h"

class InputManager;

class Window : public InputListener
{
public:
	Window(Vector vector = Vector(1280, 1080));
	void Run(InputManager *inputManager);
	bool Quit();

	bool keyReleased(const OIS::KeyEvent &e);
	bool keyPressed(const OIS::KeyEvent &e);

	SDL_Window *GetWindow();

	SDL_Window *window;
	Scene *scene;

	SDL_SysWMinfo m_inf;
	HWND m_WindowHandle;

private:
	bool quit;
};
#endif // !WINDOW_H
