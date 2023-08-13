#include <stdio.h>
#include <string.h>
#include<math.h>

int main()
{
    float h, m, absa;

    puts("Enter Hour and Minutes");
    
    scanf("%f %f", &h, &m);
    float angle = (30 * h) - (5.5 * m);
    if (angle > 180)
    {
        absa = fabs(360 - angle);
        printf("%7f", absa);
    }
    else
    {
        absa = fabs(angle);
        printf("%7f", absa);
    }
    return 0;
}