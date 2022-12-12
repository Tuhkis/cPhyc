#include <stdio.h>
#include "cPhyc.h"

int main() {
	Rect r1 = (Rect) {0, 0, 64, 64};
	Rect r2[] = { (Rect) {128, 0, 64, 64} };

	for ( int i = 0; i < 10; i++ ) {
		moveAndCollide(&r1, r2, 1, 16, 0);
		printf("X Pos: %d\n", r1.x);
	}

	return 0;
}
