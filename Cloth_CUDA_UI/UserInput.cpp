#include <stdlib.h>
#include <GL/glut.h>

// Mouse input callback
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods)
{
    if(button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS) 
    {
       double xpos, ypos;
       //getting cursor position
       glfwGetCursorPos(window, &xpos, &ypos);
       cout << "Cursor Position at (" << xpos << " : " << ypos << endl;
    }
}
