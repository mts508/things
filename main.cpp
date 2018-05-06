#include <iostream>
#include "window.hpp"

int main(int argc, char **argv) {
    std::cout << "Hello, world!" << std::endl;
    
    GameWindow mainWindow = GameWindow(); 
	mainWindow.run();
    
    return 0;
}
