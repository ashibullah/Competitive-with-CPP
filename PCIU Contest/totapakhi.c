#include<stdio.h>
#include<string.h>

int main()
{
    long int t;
    scanf("%ld", &t);
    getchar();
    
    for (long int i = 0; i < t; i++)
    {
        char a[1000];
        fgets(a, 1000, stdin);
        printf("%s", a);
    }
    
    return 0;
}




