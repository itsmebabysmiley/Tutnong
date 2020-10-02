#include <stdio.h>
int main(){
    int n;
    int t1 = 0, t2 = 1, m=1, nextTerm;
    do{
        scanf("%d", &n);
    }while (n<=2);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            printf("%d ", t1);
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("\n");
    }    
}