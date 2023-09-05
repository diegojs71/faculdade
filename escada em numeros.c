#include <stdio.h>
int main(){
 int i,j,n,m=1,d=1;
  printf("insira o valor de n:");
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
     printf(" %d",d);
     d++;
    }
  m++;
  printf(" \n");
  }
 return 0;
}
