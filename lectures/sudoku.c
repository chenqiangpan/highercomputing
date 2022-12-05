#include <stdio.h>

#define MIN_VALUE '1'
#define MAX_VALUE '9'
#define EMPTY_VALUE '.'
#define NUM_VALUES (MAX_VALUE- MIN_VALUE +1)
#define GRID_SIZE (NUM_VALUES * NUM_VALUES)
#define MAX_CELL (GRID_SIZE -1)
#define TRUE 1
#define FALSE 0


typedef char value;
typedef int cell;
typedef value sudokuGrid[GRID_SIZE];

int hasSolution(sudokuGrid game);
void readGame(sudokuGrid sample);
void showGame(sudokuGrid sample);
int isFull(sudokuGrid game);
cell getaEmptyCell(sudokuGrid game);
int isLegal(sudokuGrid game, cell candidateCell, value trialValue);
void setCell(sudokuGrid game, cell candidateCell, value trialValue);
void clearCell(sudokuGrid game, cell candidateCell);


int main(int argc, const char * argv[])

{
	
	sudokuGrid sample;
	readGame(sample);

	if(hasSolution(sample))
	{
		showGame(sample);
	}

	return 0;

}


int hasSolution(sudokuGrid game)
{
	int solved ;
	cell candidateCell;
	value trialValue;


	if(isFull(game))
	{
		solved = TRUE;
	}else
	{
		candidateCell = getaEmptyCell(game);
		trialValue = MIN_VALUE;
		solved = FALSE;

		while (!solved &&(trialValue <= MAX_VALUE))
		{

			if(isLegal(game, candidateCell, trialValue))
			{


				setCell(game, candidateCell, trialValue);

					if(hasSolution(game))
					{
						solved = TRUE;
					}
					else
					{
						clearCell(game, candidateCell);
					}


			}
			trialValue ++;
		}


	}

	return solved;

}


void readGame(sudokuGrid sample)
{

}

void showGame(sudokuGrid sample)
{

}
int isFull(sudokuGrid game)
{

	return 0;

}
cell getaEmptyCell(sudokuGrid game)
{
	cell emptyCell = 1;

	return emptyCell;
}
int isLegal(sudokuGrid game, cell candidateCell, value trialValue)
{
	return 0;
}
void setCell(sudokuGrid game, cell candidateCell, value trialValue)
{

}
void clearCell(sudokuGrid game, cell candidateCell)
{

}