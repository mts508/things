#ifndef __OWL_VOLUME_INCLUDED__
#define __OWL_VOLUME_INCLUDED__

#include "owl.h"
#include <vector>

namespace Owl {
    class Volume {
    private:
        uint8_t sizeX;
        uint8_t sizeY;
        uint8_t sizeZ;
        uint32_t length;
        std::vector<VoxelData> data;

    public:
        Volume( uint8_t x_size, uint8_t y_size, uint8_t z_size  );
        void setAt(uint8_t x, uint8_t y, uint8_t z, VoxelData block);
        VoxelData getAt(uint8_t x, uint8_t y, uint8_t z);
        void free();
    };
}

#endif
