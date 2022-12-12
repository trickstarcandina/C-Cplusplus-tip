#include<stdio.h>
main()
{
    int giay,phut,gio;
    scanf("%d",&giay);
    gio=giay/3600;
    giay=giay%3600;
    phut=giay/60;
    giay=giay%60;
    if (gio<10)
        printf("0%d:",gio);
    else
        printf("%d:",gio);
    if (phut<10)
        printf("0%d:",phut);
    else
        printf("%d:",phut);
    if (giay<10)
        printf("0%d",giay);
    else
        printf("%d",giay);
    return 0;
}
