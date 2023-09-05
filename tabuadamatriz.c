#include <stdio.h>
#include <stdlib.h>
int main()
{
 int n,m,i,j;
  printf("digite o valor de n:");
  scanf("%d",&n);
  printf("digite o valor de m:");
  scanf("%d",&m);

   for(i=1;i<=n;i++){
    printf("\n");

     for(j=1;j<=m;j++)
      printf("%5d",i*j);

   }



 return 0;
}
