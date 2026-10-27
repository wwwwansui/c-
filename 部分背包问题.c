#include <stdio.h>
#include <stdlib.h>
typedef  struct
{
    int V;
    int M;
    float P;
} Gold;
int cmp(const void *a, const void *b)
{
    double x = ((Gold *)a)->P;
    double y = ((Gold *)b)->P;
    if (x > y) return -1;
    if (x < y) return 1;
    return 0;
}
int main(void)
{
    float price=0;
    int N,T;
    scanf("%d\n%d",&N,&T);
    Gold gold[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d %d",&gold[i].M,&gold[i].V);
        gold[i].P=(float)gold[i].V/gold[i].M;
    }
    qsort(gold,N,sizeof(Gold),cmp);
    for(int I=0;I<N&&T>0; I++)
    {
        if(T>=gold[I].M)
        {
            price=gold[I].V+price;
            T=T-gold[I].M;
        }
        else
        {
            price=((float)T/gold [I].M)*gold[I].V+price;
            T=0;
        }
    }
    printf("%.2f",price);
    return 0;
}
