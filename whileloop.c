#include <stdio.h>
int main(){
    int base10 = 4;             //decimal
    int base2[4] = {0} ;        //array
    int i = 0;
    //if base10 is not equal 0
    while(base10 != 0){
        base2[i++] = base10%2;  // get remainder.
        base10 = base10/2;      //move to next digit.
    }
    //print base2 in backward.
    for (int j = 3; j > -1; j--)
    {
        printf("%d",base2[j]);
    }
    return 0;
}