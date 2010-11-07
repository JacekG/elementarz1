#include <stdio.h>
int main() {
   int tabela[] = {1, 2, 4, 6, 12};
   int n;

   n = tabela(0);

   printf("%d", tabela(4));
   printf("%d", tabela(3));
   printf("%d", tabela(2));
   printf("%d", tabela(1));
   for (i=4;  i>=0; i-- ; ; )
     printf("%d", tabela(1));
      ...
   return 0;
}
