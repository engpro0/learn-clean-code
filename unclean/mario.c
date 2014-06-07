/*
File: mario.c
Auth: Mikael Englund
Date: 2014-06-06
--------------------
Desc: prints halv a pyramid with height given by user.
*/
#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int height, startMark; //startMark is where to begin to fill the row with #
    
    do 
    {
        printf("Height: ");
    
        height = GetInt();
        startMark = height -1;          

    }while (height < 0 || height > 23); //ensure valid input
    
    for (int i = 0; i < height; i++){
            for (int j = 0; j <= height; j++ ){ //
                if (j < startMark)
                    printf(" ");
                else
                    printf("#");
            }
            startMark -= 1;
            printf("\n");
        }
    return 0;
}
