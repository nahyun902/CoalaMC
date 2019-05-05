
#include <iostream>
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

int main(void)
{
	int px, py, pz;
	int sx, sy, sz;
	int ex, ey, ez;

	printf("건물의 위치를 입력하세요 : ");
	scanf_s("%d %d %d", &px, &py, &pz);

	printf("건물의 크기(sx, sy, sz)를 입력하세요 : ");
	scanf_s("%d %d %d", &sx, &sy, &sz);

	printf("건물의 크기(ex, ey, ez)를 입력하세요 : ");
	scanf_s("%d %d %d", &ex, &ey, &ez);


	BlockID g = createBlock(BLOCK_DIAMOND);

	int rx = (sx + ex) / 2;
	int ry = (sy + ey) / 2;
	int rz = (sz + ez) / 2;

	int tx, ty, tz;

	for (tx = px - rx; tx <= px + rx; tx++) {
		for (ty = py; ty <= py + ry; ty++) {

			for (tz = pz - rz; tz <= pz + rz; tz++) {
				locateBlock(g, tx, ty, tz);
			}
		}
	}



}