/*
จงเขียนการทำงานต่อไปนี้ในรูปแบบภาษาซี (Level 2)
c = 2a+b
c = a^5+a^4+2a^3+3a^2+4a+3
c = 2+3a
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("Enter your a :");
    scanf("%d",&a);

    printf("Enter your b :");
    scanf("%d",&b);
    
    c = (2*a)+b;

    printf("C = %d \n", c);

    c = (pow(a,5))+(pow(a,4))+(2*(pow(a,3)))+(3*(pow(a,2)))+(4*a)+3;

    printf("C = %d \n", c);

    c =2+(3*a);

    printf("C = %d \n", c);

    return 0;

}
