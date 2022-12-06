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
typedef value sudokuGrid[GRID_SIZE + 1];

int hasSolution (sudokuGrid game);
void readGame (sudokuGrid *sample);
void showGame (sudokuGrid sample);
int isFull (sudokuGrid game);
cell getaEmptyCell (sudokuGrid game);
int isLegal (sudokuGrid game, cell candidateCell, value trialValue);
void setCell (sudokuGrid game, cell candidateCell, value trialValue);
void clearCell (sudokuGrid game, cell candidateCell);


int
main (int argc, const char *argv[])
{

  sudokuGrid sample;
  readGame (&sample);
  //showGame(sample);

  if (hasSolution (sample))
  {
      printf("\n the game has solution!");
      





  }
  else
  {
    printf("\n the game has NO solution!");
  }

     printf ("\n let's see what is inside the array Again: \n");

  for (int i = 0; i < GRID_SIZE ; i++)
    {
      printf ("%c", sample[i]);
    }

  return 0;

}


int
hasSolution (sudokuGrid game)
{
  int solved;
  cell candidateCell;
  value trialValue;


  if (isFull (game))
    {
      printf("\n the game is FULL! \n");
      solved = TRUE;
    }

  else
    {
        printf("\n the game is NOT FULL! \n");
      candidateCell = getaEmptyCell (game);

      trialValue = MIN_VALUE;

      solved = FALSE;

      while (!solved && (trialValue <= MAX_VALUE))
	      {

      	  if (isLegal (game, candidateCell, trialValue))
	        {


	          setCell (game, candidateCell, trialValue);

	          if (hasSolution (game))
		        {
		          solved = TRUE;
		        }
	          else
		        {
		          clearCell (game, candidateCell);
		        }


    	    }
	        trialValue++;
	      }


    }

  return solved;

}




// check----------read a game from txt and write it to sample array
void
readGame (sudokuGrid *sample)
{

  FILE *textfile;
  char ch;
  int index = 0;

  textfile = fopen ("sample.txt", "r");

  printf ("\n this is the original sample:  \n");

  while ((ch = fgetc (textfile)) != EOF)
    {
      putchar (ch);

      *sample[index] = ch;
      index++;
    }


  printf ("\n let's see what is inside the array: \n");

  for (int i = 0; i < GRID_SIZE ; i++)
    {
      printf ("%c", *sample[i]);
    }
  fclose (textfile);
}

void
showGame (sudokuGrid sample)
{

}



// check---------- check sample game is full or not
int
isFull (sudokuGrid game)
{

  for (int i = 0; i <GRID_SIZE +1; i++)
  {
    if (game[i]=='.')
    {
     
      return FALSE;
    }
    
  }
  

  return TRUE;

}


// check---------- get the first empty cell (index) of the game
cell
getaEmptyCell (sudokuGrid game)
{
  cell emptyCell = 0;

  while (game[emptyCell]!='.')
  {
    emptyCell++;
  }

  printf("\n the empty cell is %d \n ", emptyCell);
  
  return emptyCell;
}


//not verify yet ------ see if a candidate value is valid
int
isLegal (sudokuGrid game, cell candidateCell, value trialValue)
{
  int row;
  int column; 
  row = candidateCell / 9;
  column = candidateCell % 9;

  //scan vertical
  for (int i = 0; i <9 ; i++)
  {

    if(game[(9 * i) + row] == game[candidateCell]  )
    {
      if((9 * i) + row != candidateCell)
      
          return FALSE;
    }
  }
  //scan horizontal
  for (int j = 0; j <9 ; j++)
  {

    if(game[(column*9)+j] == game[candidateCell] )
    {
      if((column*9)+j != candidateCell)
      
          return FALSE;
    }
  }

  //square group
  //
  //
  return TRUE;
}


// put trial value into the candidate cell
void
setCell (sudokuGrid game, cell candidateCell, value trialValue)
{
    game[candidateCell] = trialValue;
}

void
clearCell (sudokuGrid game, cell candidateCell)
{
  game[candidateCell] = '.'; 
}
