#include <stdio.h>

int main()
{
 
  int x; 
  int y;  

  printf ("Entre com o valor de x ");
  scanf("%d",&x);

  printf ("Entre com o valor de y ");
  scanf("%d",&y);

  if (y>x)
     printf("MSG2:y é maior que x\n");
  else
     printf("MSG3:y é igual ou menor que x\n");
  
  return 0; 
}