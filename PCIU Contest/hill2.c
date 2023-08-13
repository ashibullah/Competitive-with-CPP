#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a,b,c,t;
    double area,s,r;
    scanf("%d",&t);
    int count[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        s=(a+b+c)/2.0;
    
        area= sqrt(s*(s-a)*(s-b)*(s-c));
        r = area / (0.5*3.1416);
        if (r >= 12 && r <=32  )
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
