#include <stdio.h>
int main()
{
int a;
char b;
float c;

  printf("insira uma variavel inteira:\n");
  scanf("%d",&a);
  fflush(stdin);
  printf("insira apenas um caracter:\n");
  scanf("%c",&b);
  printf("insira uma variavel:\n");
  scanf("%f",&c);

   printf("as variaveis inseridas foram %d,%c e %2f",a,b,c);
 return 0;
}
