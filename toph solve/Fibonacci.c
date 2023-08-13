#include<stdio.h>
#include<string.h>

int main(){
    int m,n;
    scanf("%d %d", &m,&n);
    char disp[m+5][n+5];
   
   int i, j;
   for(i=0; i<m; i++) {

         scanf("%s", &disp[i]);
        
      
   }
   for(i=0; i<m; i++) {
         printf("%s ", disp[i]);
      
   }
   //Displaying array elements
   
}