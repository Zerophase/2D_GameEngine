#ifndef INPUTLISTENER_H
#define INPUTLISTENER_H

#include "OIS.h"

class InputListener
{
public:
	virtual bool keyPressed(const OIS::KeyEvent &e) { return true; }
	virtual bool keyReleased(const OIS::KeyEvent &e) { return true; }
};
#endif // !INPUTLISTENER_H
