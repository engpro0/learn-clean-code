/*
File: mario.c
Auth: Mikael Englund
Date: 2014-06-06 -> 2014-06-07
--------------------
Desc: Prints halv a pyramid with height given by user.
      This code is cleaner
*/
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int pyramidHeight, leftMostBrick; 
    
    do 
    {
        printf("Height: ");
    
        pyramidHeight = GetInt();
        leftMostBrick = pyramidHeight -1;               //set leftmost brick to next to rightmost brick         

    } while (pyramidHeight < 0 || pyramidHeight > 23);  //ensure height is positive and less than  or equal 23
    
    for (int level = 0; level < pyramidHeight; level++){
        for (int j = 0; j <= pyramidHeight; j++ ){      //fill bricks to the right and including the leftmost brick.
            if (j < leftMostBrick)
                printf(" ");
            else
                printf("#");
        }
        leftMostBrick -= 1;                            //set leftmost brick for the next level
        printf("\n");
   }
   return 0;
}

