#include <stdio.h>
#include <string.h>
int main()
{
    puts("HelloWorld");
   char a[100], b[100];
   gets(a);
   gets(b);
   int x[20], y[20], l1, l2, count = 0,diff;
   l1 = strlen(a);
   l2 = strlen(b);
   if (l1 == l2)
   {

      for (int i = 0; i < l1; i++)
      {
         x[i] = a[i] - '0';
      }
      for (int i = 0; i < l2; i++)
      {
         y[i] = b[i] - '0';
      }

      for (int i = l1 - 1; i >= 0; i--)
      {
         if ((x[i] + y[i]) > 9)
         {
            count++;
         }
      }
   }
   if (l1 > l2)
   {
      diff=l1-l2;
      for (int i = 0; i < l1; i++)
      {
         x[i] = a[i] - '0';
      }
      for (int i = 0; i < l2; i++)
      {
         y[i] = b[i] - '0';
      }

      for (int i = l1 - 1; i >= 0; i--)
      {
         if ((x[i] + y[i-diff]) > 9)
         {
            count++;
         }
      }
   }
   else if (l1 < l2)
   {
      diff=l2-l1;
      for (int i = 0; i < l1; i++)
      {
         x[i] = a[i] - '0';
      }
      for (int i = 0; i < l2; i++)
      {
         y[i] = b[i] - '0';
      }

      for (int i = l2 - 1; i >= 0; i--)
      {
         if ((x[i-diff] + y[i]) > 9)
         {
            count++;
         }
      }
   }

   if (count > 0)
      printf("Yes\n");
   else
      printf("No\n");
}