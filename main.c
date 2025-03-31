#include<stdio.h>
#include<stdlib.h>
#include"welcomefile.h"
#include"randomword.h"

/*
    Here are the color codes you can use:

0 = Black
1 = Blue
2 = Green
3 = Aqua
4 = Red
5 = Purple
6 = Yellow
7 = White
8 = Gray
9 = Light Blue
A = Light Green
B = Light Aqua
C = Light Red
D = Light Purple
E = Light Yellow
F = Bright White
*/
int main ()
{
    system ("color C0");
    int rpm , exit = 1 ;
    welcome ();
    while(exit)
    {
        rpm = random () ;
        printf("%d\n", rpm);
        printf("Want to play more press '1'\n");
        printf("For Exit press '0': ");
        scanf("%d",&exit);
    }

    return 0;
}