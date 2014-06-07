/*
File: greedy.c
Auth: Mikael Englund
Date: 2014-06-06 -> 2014-06-07
Desc: Using greedy aproach to divide money into different coinss,
      Starts with empty coinsInHand, and try to match value starting bigest coinst to smallest.
*/
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float owedChange, changeInHand = 0;
  
    int minimunCoinsOwed = 0;
    float coins[] = {0.25,0.10,0.05,0.01};
    int lenght = sizeof(coins)/sizeof(coins[0]);
    
    printf("O hai! ");
    
    do{
        printf("How much change is owed?\n");
        owedChange = GetFloat();
        
    } while(owedChange <= 0);                    //Ensure that you owe change.

    for(int i = 0; i < lenght; i++){
    
        if (changeInHand == owedChange)         
            break;
            
        while(changeInHand + coins[i] <= owedChange){
        
            changeInHand += coins[i];
            minimunCoinsOwed+=1;
        }
    }
    printf("%d\n",minimunCoinsOwed);
    
    return 0;
}
