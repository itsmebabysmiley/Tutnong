#include <stdio.h>
int main(){
    int r = 3;
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            if(j == i){
                printf(">>");
            }else{
                printf("= ");
            }
        }
        printf("\n");
    }
    for(int i = n-1 ; i >= 0; i--){
        for (int j = 0; j < i; j++)
        {
            if(j == i-1){
                printf(">>");
            }else{
                printf("= ");
            }
        }
        printf("\n");
        
    }
    
    return 0;
}