#include <stdio.h>
#include "main.h"


int main(int argc, char *argv[])
{
   int result;
   int n1 = atoi(argv[0]);
   int n2 = atoi(argv[1]);
   int *res = &result;
   *res = n1 * n2;
   if (argc == 2)
   {
      printf("The result is : %d", res);
   }
   else
   {
      printf("Error");
      return 1;
   }
}

