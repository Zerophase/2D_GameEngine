#ifndef MOVABLERESOURCE_H
#define MOVABLERESOURCE_H

#include "RenderableResource.h"
#include "InputListener.h"
#include "InputManager.h"

class MovableResource : public RenderableResource//, public InputListener
{
public:
	MovableResource(Vector vector, int drawOrder, std::string fileName, InputManager *inputManager);
	InputManager *inputManager;

	void SetUp(SDL_Renderer *&renderer);
	virtual void Update();
	virtual void Draw(SDL_Renderer *&renderer);
};
#endif // !MOVABLERESOURCE_H
