#include <stdio.h>

int nb_bits_char(char x)
    {
    
      int i=0;
       ;
      while(x!=0)
      {
          if (x&1)
          {
              i++;
          }
        x = x>>1;
      }
    
  
    
     return i;
    }


int main()
{
    int i = nb_bits_char(4);
    int j = 8-i;
    printf("il y a %d bit à 1 et %d à 0\n" 
    ,               i,            j       );
    return 0;
}
