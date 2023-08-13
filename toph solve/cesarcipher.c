#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    scanf("%d",&x);
    getchar();
    char a[100];
    gets(a);
    int l1= strlen(a);
    for (int i = 0; i < l1 ; i++)
    {
        if (a[i]==' ')
        {
           a[i]=' ';
        }
        else {
         if (a[i]>='a' && a[i]<='z')
         {
            a[i] = (a[i]-'a'-x+26)%26+'a';
         }
         if (a[i]>= 'A' && a[i] <= 'Z')
         {
            a[i]=(a[i]-'A'-x+26)%26 +'A';
         }
        }
    }
    puts(a);
    
    return 0;
}
