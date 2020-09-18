// Author John Sweetall jts6052@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n) {
  if (n == 0){
    return 0;
  }
  else {
    return (n % 10) + digit_sum(n/10);
  }
}

void print_n(int n) {
  if (n == 0){
    return;
  }
  else {
    print_n(n-1);
  }
}

int main(void) {
  int integer1 = atof(readline("Enter an int: "));
  printf("sum is %i.\n", digit_sum(integer1));
  print_n(integer1);
  return 0;
}