#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: 2D array representing the chessboard
 *
 * Description: This function prints an 8x8 chessboard
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
