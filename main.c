#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int sec;
    int soru;

    do
    {
        do
        {
            printf("TAS-1\nKAGIT-2\nMAKAS-3\n");
            printf("LUTFEN BIRINI SECINIZ:");
            scanf("%d",&sec);
        }
        while (sec>3);


        srand(time(NULL));
        sayi=1+rand()%3;
        if (sayi==1)
        {
            printf("RAKIP:TAS\n");
            if (sec==1)
                printf("BERABERE!\n");
            else if (sec==2)
                printf("KAZANDIN!\n");
            else if (sec==3)
                printf("RAKIP KAZANDI!\n");

        }
        else if (sayi==2)
        {
            printf("RAKIP:KAGIT\n");
            if (sec==1)
                printf("RAKIP KAZANDI!\n");
            else if (sec==2)
                printf("BERABERE!\n");
            else if (sec==3)
                printf("KAZANDIN!\n");

        }
        else if (sayi==3)
        {
            printf("RAKIP:MAKAS\n");
            if (sec==1)
                printf("KAZANDIN!\n");
            else if (sec==2)
                printf("RAKIP KAZANDI!\n");
            else if (sec==3)
                printf("BERABERE!\n");

        }
        printf("TEKRAR OYNAMAK ICIN 0 A BASINIZ:");
        scanf("%d",&soru);

    }

    while (soru==0);



    return 0;
}
