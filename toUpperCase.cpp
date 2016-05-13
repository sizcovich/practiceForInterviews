/* toupper example */
#include <stdio.h>
#include <ctype.h>
// int main ()
// {
//   int i=0;
//   char str[]="Test String.\n";
//   char c;
//   while (str[i])
//   {
//     c=str[i];
//     putchar (toupper(c));
//     i++;
//   }
//   return 0;
// }

// bool isLegal(char c)
// {
//   char legal[] = {'a', 'A', 'b','B' /*..and so on*/};
//   int len = sizeof(legal)/sizeof(char);

//   for (int i = 0; i < len; i++)
//     if (c == legal[i])
//       return true;
//   return false;
// }

int main ()
{
  int i=0;
  char str[]="Caa - 5 6 3 = ? ";
  while (str[i])
  {
    if (isalpha(str[i])) printf ("character %c is alphabetic\n",str[i]);
    else if (isxdigit(str[i])) printf ("character %c is numeric\n",str[i]);
    else printf ("character %c is not alphabetic\n",str[i]);
    i++;
  }
  return 0;
}