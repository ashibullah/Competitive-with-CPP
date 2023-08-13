#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[50],r[50],re[50];
    int n;
    scanf("%s",str);
    // strcpy(r,str);
    // strcpy(re,strrev(r));

    for(int i=0; i<strlen(str); ++i)
{
    re[strlen(str)-i-1] = str[i];
}
    
    n = strcmp(str, re);
    
   if (n==0)
   {
    printf("Yes");
   }
   else puts("No");
 
    return 0;
}