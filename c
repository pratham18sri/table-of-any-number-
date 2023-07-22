#include <stdio.h>

int main(void) {
int a ;
  printf(" enter a:");
  scanf("%d", &a );
  printf(" multiplication table of %d\n",a);

for( int i = 1; i <= 10; i++){
  printf(" %d\n ", a*i);
}
  
  
  return 0;
}
