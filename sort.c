#include <stdio.h>
int main(){
    int array[10] = {2,1,3,10,52,35,12,67,4,11};
    printf("Before sort: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j < 10-i; j++)
        {
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printf("After sort: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
    
    
}