#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    long int t;
    scanf("%ld", &t);
    long int a,b,c;
    
    for (long int i = 0; i < t; i++)
    {
       scanf("%ld %ld %ld",&a,&b,&c);
       b=b-a;
       a= (pow(a,c)+ pow(b,c));
       
    }
    
    return 0;
}




