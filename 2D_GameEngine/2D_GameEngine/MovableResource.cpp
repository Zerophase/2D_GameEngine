#include "stdafx.h"
#include "MovableResource.h"

MovableResource::MovableResource(Vector vector, int drawOrder, std::string fileName, InputManager *inputManager)
:RenderableResource(vector, drawOrder, fileName)
{
	this->inputManager = inputManager;
}

void MovableResource::SetUp(SDL_Renderer *&renderer)
{
	RenderableResource::SetUp(renderer);

	this->inputManager = inputManager;
}

void MovableResource::Update()
{
	if (inputManager->m_Keyboard->isKeyDown(OIS::KC_LEFT))
		position.x -= 5;
	if (inputManager->m_Keyboard->isKeyDown(OIS::KC_RIGHT))
		position.x += 5;
	if (inputManager->m_Keyboard->isKeyDown(OIS::KC_UP))
		position.y -= 5;
	if (inputManager->m_Keyboard->isKeyDown(OIS::KC_DOWN))
		position.y += 5;
}

void MovableResource::Draw(SDL_Renderer *&renderer)
{
	RenderableResource::Draw(renderer);
}