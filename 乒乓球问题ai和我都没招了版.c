#include <stdio.h>
#include <stdlib.h>
struct test
{
    int a[30000];
    int b[30000];
    int ball;
};
struct test _21;
struct test _11;
int main()
{
    int time11=0;
    int time21=0;
    int c;
    while((c=getchar())!='E')
    {
        if(c=='W')
        {
            _21.a[time21]++;
            _11.a[time11]++;
            _21.ball++;
            _11.ball++;
        }
        if(c=='L')
        {
            _21.b[time21]++;
            _11.b[time11]++;
            _21.ball++;
            _11.ball++;
        }

        if (_11.ball>=11&&abs(_11.b[time11]-_11.a[time11])>=2)
        {
            time11++;
            _11.ball=0;
        }
        if (_21.ball>=21&&abs(_21.b[time21]-_21.a[time21])>=2)
        {
            time21++;
            _21.ball=0;
        }
    }
    for(int i=0; i<time11; i++)
        printf("%d:%d\n",_11.a[i],_11.b[i]);
    if(_11.a[time11] != 0 || _11.b[time11] != 0)
        printf("%d:%d\n", _11.a[time11], _11.b[time11]);
    printf("\n");
    for(int i=0; i<time21; i++)
        printf("%d:%d\n",_21.a[i],_21.b[i]);
    if(_21.a[time21] != 0 || _21.b[time21] != 0)
        printf("%d:%d\n", _21.a[time21], _21.b[time21]);
    return 0;
}
