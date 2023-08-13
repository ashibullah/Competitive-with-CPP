#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y;
    scanf("%d %d", &x,&y);
    int n1 = y%x;
    int n2= x-n1;
    printf("%d",n2);
    // 3 10
    // 10y% 3x = 1n
    // n2= x-n
    // print n2


    return 0;
}
