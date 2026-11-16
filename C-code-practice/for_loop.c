#include <stdio.h>
int main() {
	int x, y, z;
	int count = 0;
	for (x = 1; x <= 100; x++) {
		for (y = 1; y <= 100; y++) {
			for (z = 1; z <= 100; z++) {
				if (x + y + z == 100 && 5 * x + 2 * y + z == 150) {
					printf("x=%d,y=%d,z=%d\n", x, y, z);
					count++;
				}
			}
		}
	}
	printf("count=%d\n", count);
	return 0;
    //My first C programming practice
}
