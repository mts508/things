#ifndef __OWL_H_INCLUDED__

#define __OWL_H_INCLUDED__
#define GL_GLEXT_PROTOTYPES

#include <SDL2/SDL.h>
#include <SDL2/SDL_log.h>
#include "GL/gl.h"

typedef struct {
	GLfloat r;
	GLfloat g;
	GLfloat b;
    uint8_t visible;
} VoxelData;


#endif
