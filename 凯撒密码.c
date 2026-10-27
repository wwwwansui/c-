#include <stdio.h>
int main(void)
{
    int n;
    char input[51];
    scanf("%d",&n);
    getchar();
    fgets(input,51,stdin);
    for (int i = 0; input [i]!='\0' ; i++)
    {
    if(input[i]>='a'&&input[i]<='z'-n)
        input[i]=input[i]+n;
    else if(input[i]>='z'-n)
        input[i]=input[i]+n-26;
}
    printf("%s",input);
    return 0;
}
