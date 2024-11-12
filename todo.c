
#include<GLFW/glfw3.h>
#include<GL/gl.h>
int main(void)
{
glfwInit();
GLFWwindow* window = glfwCreateWindow(1280, 720, "Hello World", NULL, NULL);
glfwMakeContextCurrent(window);
while(!glfwWindowShouldClose(window))
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
    glfwPollEvents();
    glfwSwapBuffers(window);
}
glfwDestroyWindow(window);
glfwTerminate();
}