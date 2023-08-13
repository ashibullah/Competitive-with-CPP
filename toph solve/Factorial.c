#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    long long int n, c = 1, size, count = 0,k;
    int j=0;
    scanf("%lld", &n);
    for (int i = n; i > 1; i--)
    {
        c = c * i;
    }
    size = c;
    while (size != 0)
    {
        size = size / 10;
        count++;
    }
    char s[2000],new[2000];
    sprintf(s, "%lld", c);

    printf("%lld %lld\nString =%s\n", c, count, s);
    
    if (count> 4)
    {
         for (int i = count - 4; i < count; i++)
        {
            new[j]=s[i];
            j++;
            
        }
   
        //puts(new);
        k= atoi(new);
        printf("%lld",k);
        
    }

    else{
        k= atoi(s);
        printf("%lld",k);
}
}