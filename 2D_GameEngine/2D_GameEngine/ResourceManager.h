#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H

#include "Resource.h"
#include "RenderableResource.h"
#include "MovableResource.h"
#include "Layer.h"
#include <list>
#include "ResourceSorting.h"

#define ResourceManagement ResourceManager::Instance()

class ResourceManager
{
private:
	ResourceManager() {}

	std::list<Resource*> resources;

public:
	static ResourceManager *Instance();

	void AddResource(Resource *resource);
	void SortResources();

	void SetUp(SDL_Renderer *&renderer);
	void Update();
	void Draw(SDL_Renderer *&renderer);
};
#endif // !RESOURCEMANAGER_H
