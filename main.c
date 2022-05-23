#include <stdio.h>

int main()
{
    for(int y = 0; y <= 7; y++)
    {
        if( y % 2 == 0){
            for(int x = 1; x <= 4; x++){
                printf("+-");
            }
            printf("+"); 
        }
        else{
            for(int x = 1; x <= 4; x++){
                printf("+-");
            } 
            printf("+");   
        }
        printf("\n");
    }
    
    return 0;
}