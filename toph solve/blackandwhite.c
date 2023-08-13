#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    long int m,n,count =1;
    scanf("%ld %ld",&m,&n);
    long int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j]= count;
            count ++; 
        }
        
    }
    if (a[m][n]%2 ==0)
    {
        printf("White\n");
    }
    else printf("Black\n");   

    return 0;
}
