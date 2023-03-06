#include <stdio.h>
#include <stdlib.h>




int main(void)
{
	int x;
	int y;
	int nums [4][7] = {

		{1, 2, 12, 34, 23, 32, 45},
		{8, 25, 14, 16, 18, 21, 23},
		{12, 6, 25, 29, 31, 36, 81},
		{2, 34, 4, 5, 6, 7, 21}
			};

	for(x = 0; x < 4; x++)
	{
		for(y = 0; y < 7; y++){


		printf("%i, ", nums[x][y]);


		}
	printf("\n");


	}










	return (0);
}
