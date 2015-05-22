#include "stdafx.h"
#include "ResourceSorting.h"
#include "Resource.h"

bool ResourceSortPredicate(const Resource *resourceOne, const Resource *resourceTwo)
{
	return resourceOne->layer->DrawOrder < resourceTwo->layer->DrawOrder;
}