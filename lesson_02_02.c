#include <stdio.h>
int main ()
{
  char x;
 
  printf("Entre com um caracter\n");
  scanf("%c",&x);

  if (x=='A')
      printf("Igual a A\n");
  else if(x>'F' && x < 'M')
      printf("Entre F e M\n");
  else if (x>='a' && x<='z')
      printf ("minúsculo entre a e z inclusive\n");
  else
      printf ("Outro...\n");
  return 0;
}