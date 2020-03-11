#include<stdio.h>
int main()
{
  char c;
  printf("enter a character: ");
  scanf("%c", &c);
  
  // %d displays the integer value of a character
  // %d displays the actual character
  printf("ASCII value of %c = %d", c, c);

  return 0;
}
