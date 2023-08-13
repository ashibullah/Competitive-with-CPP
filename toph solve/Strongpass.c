#include <stdio.h>
#include <string.h>
int main()
{
    char a[25];
    gets(a);
    int l1 = strlen(a);
    a[0]= toupper(a[0]);
    for (int i = 0; i < l1; i++)
    {
        if (a[i]== 's' || a[i]== 'S')
        {
            a[i]='$';
        }
        if (a[i]== 'i')
        {
            a[i]='!';
        }
        
        if (a[i]== 'o')
        {
            a[i]='(';
            for (int j = l1-1; j > i ; j--)
            {
                a[j+1]=a[j];
            }
            a[i+1]=')';
            
        }       
    }
    int l2= strlen(a);
    a[l2]='.';
    for (int i = 0; i <= l2; i++)
    {
        printf("%c",a[i]);
    }
    puts("");
    
}