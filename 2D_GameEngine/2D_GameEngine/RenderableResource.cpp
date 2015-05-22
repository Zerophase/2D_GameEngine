#include "stdafx.h"
#include "RenderableResource.h"

RenderableResource::RenderableResource(Vector vector, int drawOrder, std::string fileName)
	:Resource(vector, drawOrder)
{
	SetDrawOrder(drawOrder);
	file = fileName;
}

void RenderableResource::SetUp(SDL_Renderer *&renderer)
{
	texture = IMG_LoadTexture(renderer, file.c_str());
}

void RenderableResource::Update()
{
	
}

void RenderableResource::Draw(SDL_Renderer *&renderer)
{
	int w;
	int h;
	SDL_QueryTexture(texture, nullptr, nullptr, &w, &h);
	SDL_Rect pos = { position.x, position.y, w, h};
	SDL_RenderCopy(renderer, texture, NULL, &pos);
}

