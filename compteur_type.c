#include <stdio.h>


int main()
{
    unsigned int a = 0;
    int val_min = 0;
    int val_max = 0;
    do
    {
        val_max = a;
        a++;
    }while(a!=0);
 
    printf("[%d - %d]\n",val_min,val_max);
    return 0;

}