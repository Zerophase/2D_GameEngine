#include "stdafx.h"
#include "Scene.h"

Scene::Scene(SDL_Window *theWindow)
{
	renderer = SDL_CreateRenderer(theWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
}

void Scene::SetUp()
{
	ResourceManagement->SetUp(renderer);
}
void Scene::Update()
{
	ResourceManagement->Update();
}

void Scene::Draw()
{
	SDL_RenderClear(renderer);

	ResourceManagement->Draw(renderer);

	SDL_RenderPresent(renderer);
}