#include <stdio.h>
#include <string.h>

int main()
{
    char a[20][20],lol='1';
    int r,c,i,j,count=0;
    puts("Enter row and column");
    scanf("%d%d",&r,&c);
    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%s",&a[i][j]);
        }
        
    }

    for ( i = 0; i < r; i++)
    {
        puts("");
        for (j = 0; j <c; j++)
        {
            printf("%c  ",a[i][j]);
        }
    }
    puts("");
    for ( i = 0; i < r; i++)
    {
        
        for (j = 0; j < c; j++)
        {
            if (a[i][j]=='1')
            {
                // strcpy(a[i][j+1],"a");
                // strcpy(a[i][j-1],"a");
                // strcpy(a[i+1][j],"a");
                // strcpy(a[i-1][j],"a");
                a[i][j+1]='a';
                a[i][j-1]='a';
                a[i-1][j]='a';
                a[i+1][j]='a';
            }
            
        }
    }
    

    for ( i = 0; i < r; i++)
    {
        puts("");
        for (j = 0; j <c; j++)
        {
            printf("%c  ",a[i][j]);
        }
    }

    for ( i = 0; i < r; i++)
    {
        
        for (j = 0; j < c; j++)
        {
            if (a[i][j]==0)
            {
                count++;
            }
            
        }
    }

    printf("\n%d ",count);
        
}