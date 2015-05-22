#include "stdafx.h"
#include "Resource.h"

Resource::Resource(Vector vector, int drawOrder)
{
	position = vector;
	layer = new Layer(drawOrder);
}

void Resource::SetDrawOrder(int drawOrder)
{
	layer->DrawOrder = drawOrder;
}