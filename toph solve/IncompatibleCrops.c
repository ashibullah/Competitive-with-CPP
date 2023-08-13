#include <stdio.h>
int main()
{
    char* a[20][20];
    int r,c,i,j,count=0;
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
        for (j = 0; j < c; j++)
        {
           if (a[i][j]== '.' && a[i+1][j]== '.' && a[i][j+1]=='.' && a[i][j-1]=='.' && a[i-1][j]=='.')
           {
            count ++;
           }
           
            
            
            
        }
    }
    

    printf("%d\n",count);
        
}