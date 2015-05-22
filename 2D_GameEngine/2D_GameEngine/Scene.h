#ifndef SCENE_H
#define SCENE_H
#include "SDL.h"
#include "Vector2D.h"
#include "ResourceManager.h"

class Scene
{
public:
	Scene(SDL_Window *theWindow);

	void SetUp();
	void Update();
	void Draw();

private:
	SDL_Renderer *renderer;
};
#endif