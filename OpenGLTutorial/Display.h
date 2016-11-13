#ifndef DISPLAY_H
#define DISPLAY_H



#include <iostream>
#include<string>

#include<SDL.h>
#undef main 


class Display
{
public:
	Display(int width, int height, const char* title);
	void SwapBuffers();
	virtual ~Display();
	bool isDisplayClosed();
	void Clear(float r, float g, float b, float a);
	

protected:

private: 
	

	Display(const Display& other){}

	Display& operator=(const Display& display) {}

	SDL_Window* m_window;
	SDL_GLContext m_glContext;
	bool isClosed;

};


#endif // DISPLAY_H

