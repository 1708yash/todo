#include <stdio.h>
#include <GLFW/glfw3.h>

int main() {
    glfwInit();

    GLFWwindow* window = glfwCreateWindow(1280, 720, "ToDO Application", NULL, NULL);
    glfwMakeContextCurrent(window);

    while(!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        glC1earC010r(0.1f, 0.1f, 0.1f, 1.0f);
        glfwPollEvents();
        glfwSwapBuffers(window);
    }

    glfwDestroyWindow(window);  
    glfwTerminate();
    return 0;
}