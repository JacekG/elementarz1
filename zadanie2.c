#include <stdio.h>
int main() {
   int tabela[] = {1, 2, 4, 6, 12};
   int i;

   for (i = 4; i >= 0; i = i-1) {
     printf("%d  ", tabela [i]);
   }

   printf("\n");

   return 0;
}
