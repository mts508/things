#include <SDL2/SDL.h>
#include <SDL2/SDL_log.h>
#include "window.hpp"
#include <string>

Owl::window::Window::Window() {

	SDL_Init( SDL_INIT_VIDEO );

	window = SDL_CreateWindow( "SDL Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_OPENGL);

	if( window == NULL ) {

		SDL_LogError( SDL_LOG_CATEGORY_APPLICATION, "ERROR::CREATEWINDOW %s\n", SDL_GetError() );
		exit(1);

	}

	context = SDL_GL_CreateContext( window );

	if( context == NULL ) {

		SDL_LogError( SDL_LOG_CATEGORY_APPLICATION, "ERROR::CREATECONTEXT\n" );
		exit(1);

	}

	SDL_Log( "OpenGL version: %s\n", glGetString( GL_VERSION ) );
	on_create();
	
}


void Owl::window::Window::run() {
	running = true;
	

	while( running ) {

		handle_events();
		draw();

		SDL_Delay( 100 );

	}

	close();
}


SDL_Window* Owl::window::Window::getWindow() {
	return window;
}


void Owl::window::Window::handle_events() {

	SDL_Event event;

	while( SDL_PollEvent(&event) ){

		switch( event.type ) {
			case SDL_QUIT:
				running = false;
				break;

			case SDL_KEYDOWN:
				on_keyup( event.key.keysym.sym );
				//std::cout << SDL_GetKeyName( event.key.keysym.sym ) << std::endl;
				break;
		}

	}

}


void Owl::window::Window::draw() {

		glClearColor( 0.0, 0.0, 0.0, 1.0 );
		glClear( GL_COLOR_BUFFER_BIT );
		SDL_GL_SwapWindow( window );

}


void Owl::window::showAlert( const char* title, const char* message, SDL_Window* window_=NULL ) {
	SDL_ShowSimpleMessageBox( SDL_MESSAGEBOX_INFORMATION, title, message, window_);
}


void Owl::window::showError( const char* title, const char* message, SDL_Window* window_=NULL ) {
	SDL_ShowSimpleMessageBox( SDL_MESSAGEBOX_ERROR, title, message, window_);
}


void Owl::window::Window::close() {

	SDL_GL_DeleteContext( context );
	SDL_DestroyWindow( window );
	SDL_Quit();

	exit(0);

}
