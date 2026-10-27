#include <stdio.h>
int main()
{
    int a11=0,b11=0,a21=0,b21=0;
    int jushu11=0,jushu21=0;
    int jushu=0;
    int c;
    int A11[3];
    int B11[3];
    int A21[3];
    int B21[3];
    int cap21 = 3,cap11=3;
    int i11=0,i21=0;
    while((c=getchar())!='E')
    {
        jushu+=1;
        if(c=='W')
        {
            a11+=1;
            a21+=1;
        }
        else if (c=='L')
        {
            b11+=1;
            b21+=1;
        }
        else if (c=='E')
        {
            break;
        }
        else
        {
            continue;
        }
        if(jushu%11==0)
        {
            A11[jushu11]=a11;
            B11[jushu11]=b11;
            jushu11+=1;
            a11=0;
            b11=0;
        }
        if(jushu%21==0)
        {
            A21[jushu21]=a21;
            B21[jushu21]=b21;
            jushu21+=1;
            a21=0;
            b21=0;
        }
        if(jushu21==cap21)
        {
            int *A21 = realloc(A21, 2*sizeof(int));
            int *B21 = realloc(B21, 2*sizeof(int));
            cap21=cap21*2;
        }
        if(jushu11==cap11)
        {
            int *A11 = realloc(A11, 2*sizeof(int) );
            int *B11 = realloc(B11, 2*sizeof(int) );
            cap11=cap11*2;
        }
    }
    for(i11; i11<=jushu11; i11++)
        printf("%d:%d\n",A11[i11],B11[i11]);
    printf("\n");
    for(i21; i21<=jushu21; i21++)
        printf("%d:%d\n",A21[i21],B11[i21]);
    return 0;
}
