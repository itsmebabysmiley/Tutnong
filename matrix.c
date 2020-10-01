#include <stdio.h>
int main(){
    int matrixa[3][3] = {{2,4,3},
                         {5,9,0},
                         {1,3,4}};
    int matrixb[3][3] = {0}; //transpose matrix.

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrixb[i][j] = matrixa[j][i];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",matrixb[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}