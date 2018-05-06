#include "volume.hpp"


Owl::Volume::Volume( uint8_t x_size, uint8_t y_size, uint8_t z_size ) {
	sizeX = x_size;
	sizeY = y_size;
	sizeZ = z_size;

	length = sizeX * sizeY * sizeZ;
	VoxelData black = { 0.0, 0.0, 0.0 };
	data = std::vector<VoxelData> (length, black);
}


void Owl::Volume::setAt(uint8_t x, uint8_t y, uint8_t z, VoxelData block) {
	data[ x*sizeY*sizeZ + y*sizeZ + z ] = block;
}


VoxelData Owl::Volume::getAt(uint8_t x, uint8_t y, uint8_t z) {
	return data[ x*sizeY*sizeZ + y*sizeZ + z ];
}

void Owl::Volume::free() {
    data.clear();
}
