#include <stdio.h>
int main(){
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n-1; j++)
        {
            printf("  ");
        }
        for (int k = 0; k < i+1; k++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("  ");
        }
        for (int k = i; k < n-1; k++)
        {
            printf("* ");
        }
        printf("\n");
        
        
    }
    
    
    return 0;
}