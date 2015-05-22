// 2D_GameEngine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SDL.h"
#include "Vector2D.h"
#include "ResourceManager.h"
#include "Window.h"
#include "InputManager.h"
#include "QuitGame.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Window *window = new Window(Vector(1280, 800));

	InputManager inputManager;
	inputManager.Init(window);

	MovableResource *player = new MovableResource(Vector(200, 200), 1, "Player.png", &inputManager);
	RenderableResource *house = new RenderableResource(Vector(200, 200), 0, "house.png");

	ResourceManagement->AddResource(house);
	ResourceManagement->AddResource(player);
	
	ResourceManagement->SortResources();
	//inputManager.AddListener(*&player);
	inputManager.AddListener(*&window);

	window->Run(&inputManager);

	
	inputManager.Free();
	return 0;
}

