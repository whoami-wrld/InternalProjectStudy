#pragma once
#include <cstdint>
class Vector3
{
public:
	float x;
	float z;
	float y;
};

class Player
{
public:
	char pad_0000[4]; //0x0000
	Vector3 N00000050; //0x0004
	Vector3 Velocity; //0x0010
	Vector3 N00000052; //0x001C
	Vector3 Position; //0x0028
	float Pitch; //0x0034
	float Yaw; //0x0038
	float Roll; //0x003C
	char pad_0040[172]; //0x0040
	int32_t Life; //0x00EC
	char pad_00F0[844]; //0x00F0
}; //Size: 0x043C