#ifndef RESOURCE_H
#define RESOURCE_H

#include "Vector2D.h"
#include "Layer.h"
#include "SDL.h"

class Layer;

class Resource
{
public:
	Resource() {}
	Resource(Vector vector, int drawOrder);

	void SetDrawOrder(int drawOrder);
	Layer *GetDrawOrder() { return layer; }
	
	virtual void SetUp(SDL_Renderer *&renderer) = 0;
	virtual void Update() = 0;
	virtual void Draw(SDL_Renderer *&renderer) = 0;
	Layer *layer;

protected:
	Vector position;
};
#endif // !RESOURCE_H
