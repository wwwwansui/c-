#include <stdio.h>
int main(void)
{
    int L,xinhao,amount=0,shuzi,i;
    scanf("%d", &L);
    for(shuzi=1;shuzi<=L;shuzi++)
        {  
        i=1;
        xinhao=0;
        while(i<shuzi ){ 
            if (shuzi%i==0 && i!=1)
               {
                xinhao=1;
                break;
                }
            i++;
            }
        if(xinhao==0 && shuzi!=1)
        { 
            printf("%d\n",shuzi);
            amount++;
        }
        }
    printf("%d",amount);
    return 0;
}
