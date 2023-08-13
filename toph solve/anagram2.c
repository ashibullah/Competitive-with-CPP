#include <stdio.h>
#include <string.h>

int main()
{
    char a[20], b[20],tem;
    gets(a);
    gets(b);
    int l1 = strlen(a);
    int l2 = strlen(b);
    int count = 0, i,j,d;
    if (l1 != l2)
    {
        puts("No");
    }
    else
    {
        for (i = 0; i < l1 - 1; i++) {
   		for (j = i + 1; j < l1; j++) {
     		if (a[i] > a[j]) {
       			tem = a[i];
       			a[i] = a[j];
       			a[j] = tem;
     		}
            if (b[i] > b[j]) {
       			tem = b[i];
       			b[i] = b[j];
       			b[j] = tem;
     		}
   		}
 	}
    
    d= strcmp(a,b);
    if (d ==0)
    {
        puts("Yes");
    }
    else puts("No");
    
    }
}