#include "window.hpp"

void GameWindow::on_create() {
    
}


void GameWindow::draw() {

	glClearColor( 0.152, 0.156, 0.13, 1.0 );
	glClear( GL_COLOR_BUFFER_BIT );
	SDL_GL_SwapWindow( window );

}



