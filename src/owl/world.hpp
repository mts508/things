#ifndef __OWL_WORLD_INCLUDED__
#define __OWL_WORLD_INCLUDED__

#include "owl.h"
#include "chunk.hpp"
#include <list>

namespace Owl {
    class World {
    private:
        std::list<Chunk> chunks;
        std::list<Object> objects;
    };
}

#endif
