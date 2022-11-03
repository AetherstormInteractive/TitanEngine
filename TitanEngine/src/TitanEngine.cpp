#include "TitanEngine.h"

int __declspec(dllexport) main()
{
	GLFWwindow* window;
	window = glfwCreateWindow(1280, 720, "TitanEngine", NULL, NULL);
	return 0;
}
