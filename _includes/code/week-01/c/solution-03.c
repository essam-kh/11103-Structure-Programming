#include <stdio.h>

int main() {
  int n;
  int d1,d2,d3,d4;
  printf("please enter number of 4 digits\n");
  scanf("%d",&n);
  d1=n%10;
  d2=(n/10)%10;
  d3=((n/10)/10)%10;
  d4=((n/10)/10/10%10);
  printf("%d=%d+%d+%d+%d\n",n,d4*1000,d3*100,d2*10,d1);
  return 0;
}
