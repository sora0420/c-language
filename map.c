#include<stdio.h>
int main() {

	int map1[5][5] = { {0,1,0,0,1},{1,0,1,0,0},{1,1,1,0,0}, {1,0,0,1,0}, {0,1,0,1,1} };
	int map2[5][5] = { {1,1,1,1,0},{0,0,0,0,1},{1,0,1,0,1}, {1,0,0,0,1}, {1,1,1,0,0} };
	int map3[5][5] = { 0, };
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (map1[i][j] == 1 || map2[i][j] == 1)
				map3[i][j] = 1;
			else 
				map3[i][j] = 0;
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf(" %d ", map3[i][j]);
		}
		printf("\n");
	}
	return 0;
}