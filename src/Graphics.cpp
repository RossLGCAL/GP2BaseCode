#include "Graphics.h"
#include "Common.h"

//Function to initialise OpenGL
void initOpenGL()
{
	//Smooth shading
	glShadeModel(GL_SMOOTH);

	//Clear the background to black
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

	//Clear the depth buffer to 1.0
	glEnable(GL_DEPTH_TEST);

	//The depth test to use
	glDepthFunc(GL_LEQUAL);

	//Turn on the best perspective correction
	glHint( GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}