#include <stdio.h>
int main(){
    int array[2][4] = {{1,3,-42,5},
                        {70,-8,9,3}};
    int vector[4] = {1,1,-1,-1};
    int sum = 0;
    for (int i = 0; i < 2; ++i)
    {   
        sum = 0;
        for (int j = 0; j < 4; j++)
        {
            printf("(%d*%d) ",array[i][j] , vector[j]);
            sum += array[i][j] * vector[j];
        }
        printf("= %d \n",sum);
    }
    return 0;
}