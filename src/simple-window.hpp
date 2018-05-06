
#ifndef OWL_WINDOW_INCLUDED
#define OWL_WINDOW_INCLUDED

#include "owl.h"

namespace Owl {
	namespace window {
		class Window {
		protected:
			SDL_Window* window;
			SDL_GLContext context;
			bool running;
		public:
			Window();
			SDL_Window* getWindow();
			void run();
			void handle_events();
			virtual void on_create() {}
			virtual void on_keyup(SDL_Keycode key) { if( key == SDLK_ESCAPE ) close(); }
			virtual void draw();
			void close();
		};

		void showAlert(const char* title, const char* message, SDL_Window* window_);
		void showError(const char* title, const char* message, SDL_Window* window_);

	}
}

#endif
