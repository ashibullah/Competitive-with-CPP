#include <stdio.h>
#include <string.h>

int main()
{
    char a[20], b[20], p, q;
    gets(a);
    gets(b);
    int l1 = strlen(a);
    int l2 = strlen(b);
    int count = 0, d;
    if (l1 != l2)
    {
        puts("No");
    }
    else
    {
        for (int i = 0; i < l1; i++)
        {
            for (int j =i+1; j <l1; j++)
            {
                a[i] = p;
                b[j] = q;
                if (p == q)
                {
                    count++;
                    if (count == l1)
                    {
                        puts("Yes");
                    }
                }
            }
        }
    }
}