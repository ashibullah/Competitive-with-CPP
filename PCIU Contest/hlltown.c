#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a,b,c,t;
    double area,s;
    scanf("%d",&t);
    int count[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        s=(a+b+c)/2.0;
    
        area= sqrt(s*(s-a)*(s-b)*(s-c));
        if (area >= 452.3904 && area <= 3216.9984 )
        {
            count[i]=1;
        }
        else count[i] = 0;    
    }
    for (int i = 0; i < t; i++)
    {
        
        if (count[i] ==1 )
        {
            printf("Case : %d  Amazing\n",i+1);
        }
        else  printf("Case : %d  not AMAZING\n",i+1);  
    }
    
}
