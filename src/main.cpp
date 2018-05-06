#include <iostream>
#include "window.hpp"

int main(int argc, char **argv) {
    
    GameWindow mainWindow = GameWindow(); 
    mainWindow.create(960, 540);
	mainWindow.run();
    
    return 0;
}
