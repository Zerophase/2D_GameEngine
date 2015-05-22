#include "stdafx.h"
#include "QuitGame.h"
#include "SDL.h"
#include "SDL_ttf.h"
bool QuitGame::keyPressed(const OIS::KeyEvent &e)
{
	if (e.key == OIS::KC_ESCAPE)
	{
		TTF_Quit();
		SDL_Quit();
		return true;
	}
	else
		return false;
}

bool QuitGame::keyReleased(const OIS::KeyEvent &e)
{
	if (e.key == OIS::KC_ESCAPE)
	{
		TTF_Quit();
		SDL_Quit();
		return true;
	}
	else
		return false;
}