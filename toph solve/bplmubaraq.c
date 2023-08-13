#include <stdio.h>
#include <string.h>
int main()
{
    int x, count = 0;;
    char a[100];
    scanf("%d", &x);
    int score[x];
    getchar();
    for (int j = 0; j < x; j++)
    {
       
        gets(a);
        int l1 = strlen(a);
        for (int i = 0; i < l1; i++)
        {
            if (a[i] == 'N' || a[i] == 'W' || a[i] =='D')
            {
                
            }    
            else count++;            
        }
        
        score[j] = count;
        int over = score[j] / 6;
        int ball = score[j] % 6;
        if (ball == 0 && over!= 0)
        {
            printf("%d %s\n",over, (over>1)?"OVERS": "OVER");
        }
        else if (ball !=0 && over ==  0)
        {
            printf("%d %s\n",ball, (ball>1)?"BALLS": "BALL");
        }
        else printf("%d %s %d %s\n",over, (over>1)?"OVERS": "OVER", ball, (ball>1)?"BALLS":"BALL");
        
        
    }
    
    return 0;
}
