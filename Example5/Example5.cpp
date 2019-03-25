
#include "pch.h"
#include <iostream>

#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")
#include <math.h>


int main()
{
	int px, py, pz;
	getPlayerLocation(&px, &py, &pz);
	double dir = getPlayerDirection();

	BlockID a = createBlock(BLOCK_GOLD);

	//1층

	locateBlock(a, px, py, pz);
	locateBlock(a, px + 1, py, pz - 1);
	locateBlock(a, px + 2, py, pz - 2);
	locateBlock(a, px + 1, py, pz + 1);
	locateBlock(a, px + 2, py, pz - 2);
	locateBlock(a, px + 3, py, pz - 1);
	locateBlock(a, px + 4, py, pz);
	locateBlock(a, px + 3, py, pz + 1);

	//2층
	locateBlock(a, px, py, pz);
	locateBlock(a, px + 1, py + 1, pz - 1);
	locateBlock(a, px + 2, py + 1, pz - 2);
	locateBlock(a, px + 1, py + 1, pz + 1);
	locateBlock(a, px + 2, py + 1, pz - 2);
	locateBlock(a, px + 3, py + 1, pz - 1);
	locateBlock(a, px + 4, py + 1, pz);
	locateBlock(a, px + 3, py + 1, pz + 1);


	//3층
	locateBlock(a, px + 1, py + 2, pz);
	locateBlock(a, px + 2, py + 2, pz - 1);
	locateBlock(a, px + 3, py + 2, pz);
	locateBlock(a, px + 1, py + 2, pz + 1);

	//
	locateBlock(a, px + 2, py + 3, pz);
}

