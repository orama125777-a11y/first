#include <stdio.h>

int main()
{  



 return 0;
}




int my_tolower(char car)
{
    if (car >= 'A' && car <= 'Z')
    {
        car = car +23;
        printf("'%c\n'", car );
    }
    else
    {
        return -1;
    }
}

my_tolower('B')