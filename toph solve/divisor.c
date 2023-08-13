#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d",&x);
    for (int i = x; i >=1; i--)
    {
        
        if(x%i==0){
        y=x/i;
        printf("%d\n",y);

        }
    }
    
}