#include <stdio.h>
int main(){
 int qtarroz,qtcontainer,qtdoacoes,qt;
 float media;

 qtarroz=qtdoacoes=0;
 printf("qual a capacidade do container:");
 scanf("%d",&qtcontainer);

 while(qtarroz<qtcontainer)
 {
  printf("digite a quantidade de doacao:");
  scanf("%d",&qt);

   if(qtarroz+qt<=qtcontainer)
   {
     qtarroz+=qt;
     qtdoacoes++;
   }
 }

 media=qtarroz/(float)qtdoacoes;
 printf("quantidade media:%.2f",media);

 return 0;
}
