#ifndef GAME_WINDOW_INCLUDED
#define GAME_WINDOW_INCLUDED

#include "owl/window.hpp"


class GameWindow : public Owl::window::Window {
	void on_create();
	void draw();
};

#endif
