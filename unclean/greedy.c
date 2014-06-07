/*
File: greedy.c
Auth: Mikael Englund
Date: 2014-06-06
Desc: Using greedy aproach to divide money into different coins,
      Starts with empty hand, and try to match value starting bigest coint to smallest.
*/
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float owed, hand;
    int result = 0;
    
    float coin[] = {0.25,0.10,0.05,0.01};
    int lenght = sizeof(coin)/sizeof(coin[0]);
    bool endFlag = false;
    printf("O hai! ");
    
    do{
        printf("How much change is owed?\n");
        owed = GetFloat();
    }while(owed <= 0);
    
    hand = 0;
    for(int i = 0; i < lenght; i++){
    
        while(true){
        
            if ((hand+coin[i]) < owed){
                hand += coin[i];
                result+=1;
                
            } else if ((hand+coin[i]) == owed){
                hand += coin[i];
                result +=1;
                end = true;
                break;
                
            } else 
                break;
        }
        if (end)
            break;
    }
    printf("%d\n",result);
    
    return 0;
}
