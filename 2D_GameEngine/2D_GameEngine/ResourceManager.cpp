#include "stdafx.h"
#include "ResourceManager.h"

ResourceManager *ResourceManager::Instance()
{
	static ResourceManager instance;
	return &instance;
}

void ResourceManager::AddResource(Resource *resource)
{
	resources.push_back(resource);
}

void ResourceManager::SortResources()
{
	resources.sort(ResourceSortPredicate);
}

void ResourceManager::SetUp(SDL_Renderer *&renderer)
{
	for (list<Resource*>::const_iterator it = resources.begin(); it != resources.end(); it++)
	{
		(*it)->SetUp(renderer);
	}
}

void ResourceManager::Update()
{
	for (list<Resource*>::const_iterator it = resources.begin(); it != resources.end(); it++)
	{
		(*it)->Update();
	}
}

void ResourceManager::Draw(SDL_Renderer *&renderer)
{
	for (list<Resource*>::const_iterator it = resources.begin(); it != resources.end(); it++)
	{
		(*it)->Draw(renderer);
	}
}