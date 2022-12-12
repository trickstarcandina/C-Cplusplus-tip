#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if ((a+b>c)&&(b+c>a)&&(c+a>b))
    {
        if ((a==b)&&((a!=c)||(b!=c)))
            printf("3");
        else if ((a==c)&&((a!=b)||(c!=b)))
            printf("3");
        else if ((c==b)&&((c!=a)||(b!=a)))
            printf("3");
        else if((a==b)&&(b==c))
            printf("4");
        else if(a*a==b*b+c*c)
            printf("2");
        else if(b*b==a*a+c*c)
            printf("2");
        else if(c*c==b*b+a*a)
            printf("2");
        else if ( ( ((a==b)&&((a!=c)||(b!=c)))|| ((a==c)&&((a!=b)||(c!=b)))|| ((c==b)&&((c!=a)||(b!=a))) ) && ((a*a==b*b+c*c) ||(b*b==a*a+c*c) ||(c*c==b*b+a*a) ))  
            printf("5");
        else
            printf("1");
    }
    else
        printf("0");
    return 0;
}  
