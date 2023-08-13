#include <stdio.h>
int main()
{
   int n,count=0;
   scanf("%d",&n);
   int a[n];
   for (int i = 0; i < n; i++)
   {
    scanf("%d",&a[i]);
   }
   for (int i = 0; i < n-1; i++)
   {
    if (a[i]<a[i+1])
    {
        count++;
    }
   }
   if ((count+1)==n)
   {
    printf("Yes\n");

   }
   else printf("No\n");
}