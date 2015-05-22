#ifndef RENDERABLERESOURCE_H
#define RENDERABLERESOURCE_H

#include "Resource.h"
#include "Vector2D.h"
#include "SDL.h"
#include "SDL_image.h"
#include <string>

class RenderableResource : public Resource
{
public:
	RenderableResource(Vector vector, int drawOrder, std::string fileName);

	void SetUp(SDL_Renderer *&renderer);
	virtual void Update();
	virtual void Draw(SDL_Renderer *&renderer);

protected:
	SDL_Texture *texture;
	SDL_Surface *surface;

	std::string file;
};
#endif // !RENDERABLERESOURCE
