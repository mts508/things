
#ifndef OWL_WINDOW_INCLUDED
#define OWL_WINDOW_INCLUDED

#include "owl.h"

namespace Owl {
    class Window {
    protected:
        SDL_Window* window;
        SDL_GLContext context;
        bool running;
    public:
        Window();
        Window(unsigned int width, unsigned int height);
        
        // Functionality
        void create(unsigned int width, unsigned int height);
        void close();
        virtual void draw();
        void handle_events();
        void run();
        
        // Getters
        unsigned int getHeight();
        unsigned int getWidth();
        SDL_Window* getWindow();
        
        // Events
        virtual void on_create() {}
        virtual void on_keyup(SDL_Keycode key) { if( key == SDLK_ESCAPE ) close(); }
        
        // Setters
        void setHeight(unsigned int height);
        void setSize(unsigned int width, unsigned int height);
        void setWidth(unsigned int width);
    };

    void showAlert(const char* title, const char* message, SDL_Window* window_);
    void showError(const char* title, const char* message, SDL_Window* window_);
}

#endif
