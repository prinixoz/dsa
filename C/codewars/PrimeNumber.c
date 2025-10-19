#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool is_prime(int num);

int main(void) {
  int num = 247464361;
  printf("%b", is_prime(num));
  return 0;
}

bool is_prime(int num) {
  if (num <= 1)
    return false;
  for (int i = 2; i <= sqrt(num); i++)
    if (num % i == 0)
      return false;
  return true;
}
