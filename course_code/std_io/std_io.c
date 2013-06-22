#include <stdio.h>
#include <stdlib.h>

int main(){
  int test_cases = 0;
  int arg1, arg2;
  scanf("%d", &test_cases);
  while (test_cases--){
    scanf("%d", &arg1);
    scanf("%d", &arg2);
    // perform operation here
    printf("%d\n",(arg1 + arg2));
  }
}
