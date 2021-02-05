#include <stdio.h>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Window {
	GLFWwindow* mainWindow;
	GLint width, height;
	GLint bufferWidth, bufferHeight;

public:
	Window(GLint windoWidth, GLint windowHeight);
	~Window();

	int Initialise();

	GLfloat GetBufferWidth() { return bufferWidth; }
	GLfloat GetBufferHeight() { return bufferHeight; }

	bool getShouldClose() { return glfwWindowShouldClose(mainWindow); }

	void swapBuffers() { glfwSwapBuffers(mainWindow); }


	Window();
};

