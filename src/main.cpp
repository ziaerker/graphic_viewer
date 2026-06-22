#include <GLFW/glfw3.h>

#include <iostream>

int main() {

    if(!glfwInit()){
        std::cout<<"Error"<<std::endl;
        return -1;
    }
    
    GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);

    while (!glfwWindowShouldClose(window)){
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}