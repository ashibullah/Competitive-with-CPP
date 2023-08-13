#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    int p = x/10;
    int r= x;
    printf("[");
    for (int i = 0; i < p; i++)
    {
        printf("+");
    }
    for (int i = p; i < 10; i++)
    {
        printf(".");
    }
    printf("] %d%%",r);

}
