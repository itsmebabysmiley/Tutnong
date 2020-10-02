#include <stdio.h>
int main(){
    int n,m;
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            for(int k=0; k<=j; k++)
            {
                if(k==j)
                {
                    printf(">>");
                }
                else
                {
                    printf("==");
                }
            }
            printf("\n");
        }
        for(int j=m-1; j>0; j--)
        {
            for(int k=j; k>0; k--)
            {
                // printf("==");
                if(k==1)
                {
                    printf(">>");
                }
                else
                {
                    printf("==");
                }
            }
            printf("\n");
        }
    }
}