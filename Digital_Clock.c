#include <stdio.h>
#include <Windows.h>

int Clock(int h, int m, int s, int d)
{
     d = 1000;
    
    if(h>12 || m>60 || s > 60)
    {
        printf("Incorrect input!!!");
        exit(0);
    }
    while(1)
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m = 0;
        }
        if(h = 12)
        {
            h = 0;
        }
        printf("\n Clock : ");
        printf("\n %02d:%02d:%02d", h, m, s);
        Sleep(d);
        system("cls");
    }
}

int main()
{
    int iRet, h, m, s, d;
    printf("Set Time : \n");
    scanf("%d%d%d", &h, &m, &s);
    iRet = Clock(h, m, s, d);
    exit(0);
}