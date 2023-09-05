#include <stdio.h>
int main(){
 int valor,soma=0,m,i;
  printf("Informe um numero: ");
  scanf("%d",&valor);
    for(i=1;soma<valor;i+=2)
        soma+=i;
        m=((i+1)/2)-1;
    if((m*m)==valor)
     printf("Quadrado perfeito\n");
    else
     printf("Nao e quadrado perfeito");

    return 0;
}
