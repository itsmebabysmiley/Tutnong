#include <stdio.h>
int main(){
    int n = 13;
    int k = n-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j || k==j){
                printf("%d ",i%10);
            }else
            {
                printf("* ");
            }
            
        }
        printf("\n");
        k--;
        
    }
    return 0;
    
}