#ifndef __OWL_MESH_INCLUDED__
#define __OWL_MESH_INCLUDED__

#include "owl.h"
#include "volume.hpp"

namespace Owl {
    class Mesh {
    private:
        int meshId;
        int materialId;
    public:
        Mesh();
        void createFromVolume(Volume volume);
        void draw();
    };
}


#endif
