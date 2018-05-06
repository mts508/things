#ifndef __OWL_CHUNK_INCLUDED__
#define __OWL_CHUNK_INCLUDED__

#include "volume.hpp"

namespace Owl {
    class Chunk {
    private:
        int x;
        int y;
        Volume mesh;
        
    public:
        Chunk();
        Chunk(int x, int y);
    };
}

#endif
