#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, c = 1, num, count = 0,j=0,k;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        c = c * i;
    }
    num = c;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }

    char s[1000],new[1000];
    sprintf(s, "%d", c);

    
    

    if (count > 4)
    {
         for (int i = count - 3; i <= count; i++)
        {
            new[j]=s[i];
            j++;
            
        }
   
        //puts(new);
        k= atoi(new);
        printf("\n%d",k);
        
    }

    else{
        k= atoi(s);
        printf("%d",k);
}
}