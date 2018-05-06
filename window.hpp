#ifndef GAME_WINDOW_INCLUDED
#define GAME_WINDOW_INCLUDED

#include "src/simple-window.hpp"


class GameWindow : public Owl::window::Window {
	void on_create();
	void draw();
};

#endif
