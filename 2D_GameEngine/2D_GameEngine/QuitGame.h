#include "InputListener.h"

class QuitGame : public InputListener
{
	bool keyPressed(const OIS::KeyEvent &e);
	bool keyReleased(const OIS::KeyEvent &e);
};