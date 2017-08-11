#include <stdio.h>
 
int main()
{
  char bh;
 
  printf("Enter a character\n");
  scanf("%b", &bh);
 
  if (bh == 'a' || bh == 'A' || bh == 'e' || bh == 'E' || bh == 'i' || bh == 'I' || bh =='o' || bh=='O' || bh == 'u' || bh == 'U')
    printf("%c is a vowel.\n", bh);
  else
    printf("%c is not a vowel.\n", bh);
 
  return 0;
}
