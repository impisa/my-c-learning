#include <stdio.h>
#include <ctype.h>

int main() {
  int num;
  char term;
  scanf("%c", &term);

  if (isalpha(term)) {
    printf("is alpha");
  }
  else {
    printf("it is not alpha");
  }

  return 0;
}
