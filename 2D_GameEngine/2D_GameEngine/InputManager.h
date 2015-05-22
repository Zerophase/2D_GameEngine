#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include "OIS.h"
#include <list>
#include "SDL.h"

class InputListener;
class Window;

class InputManager : public OIS::KeyListener
{
public:
	OIS::InputManager *m_OISInputManager;
	OIS::Keyboard *m_Keyboard;

	std::list<InputListener*> m_InputListeners;

	InputManager();

	void Init(Window *window);
	void Free();

	bool keyPressed(const OIS::KeyEvent &e);
	bool keyDown(const OIS::KeyEvent &e);
	bool keyReleased(const OIS::KeyEvent &e);

	void Update();

	void AddListener(InputListener *listener);
};
#endif // !INPUTMANAGER_H
