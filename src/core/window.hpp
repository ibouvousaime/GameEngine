

#include <GLFW/glfw3.h>
#include <iostream>

class Window {

 private:
  int height,width;
  char* name;
  GLFWwindow* window;

 public:
  Window(int height,int width, char* name){
    this->height= height;
    this->width=width;
    this->name=name;
    window=glfwCreateWindow(this->width,this->height,this->name,NULL,NULL);
    
  
     if (!window) {
      glfwTerminate();
      std::cout << "the glfw window wasnt created"<< std::endl;
      }
	glfwMakeContextCurrent(window);
    
    
  while (!glfwWindowShouldClose(window)) {
    /* Render here */
    glClear(GL_COLOR_BUFFER_BIT);

    /* Swap front and back buffers */
    glfwSwapBuffers(window);

    /* Poll for and process events */
    glfwPollEvents();
  }
  
    glfwTerminate();
  

};
