#include <iostream>
#include <glad.h>
#include <glfw3.h>
#include <cowjr.h>


int main()
{
    //Glfw initialization.
    glfwInit();

    //Setting OpenGL version 3.3.
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    //Using core profile.
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    //Creating the window.
    GLFWwindow* window  = glfwCreateWindow(800, 600 , "CowGaveBirthBro :O",nullptr,nullptr);

    //If we fail to create that window.
    if (window == nullptr)
    {
        std::cout << "Failed create the window bro :(" << "\n";
        glfwTerminate();
        return -1;
    };

    //Make the window thus formed as the primary context in our application.
    glfwMakeContextCurrent(window);

    /* Make sure that glad is initialized before OpenGL
       as glad manages OpenGL function pointers.
    */
    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize glad bro :(" << "\n";
    };

    //Tell OpenGL the size of the rendering window
    glViewport(0,0,800,600); 

    
    //Tell glfw that we want that framebuffer_size_callback(cowjr.h) function to be called with every window resize event
    glfwSetFramebufferSizeCallback(window,framebuffer_size_callback);

    //The render loop
    while(!glfwWindowShouldClose(window))
    {
        process_input(window);

        //Rendering commands goes here
        
        glClearColor(0,0,0.4f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;
}