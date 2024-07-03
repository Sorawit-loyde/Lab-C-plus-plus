/*
จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด กับจำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
*/

#include <stdio.h>

int main()
{
    int a,b,c ;
    printf("Enter your number :");
    scanf("%d",&a);
    printf("Enter your number :");
    scanf("%d",&b);
    printf("Enter your number :");
    scanf("%d",&c);

    if(a>b && b>c){
        printf("%d",b+c);
    }
    else if(a>c && c>b){
        printf("%d",b+c);
    }
    else if(b>a && a>c){
        printf("%d",a+c);
    }
    else if(b>c && c>a){
        printf("%d",a+c);
    }
    else if(c>a && a>b){
        printf("%d",b+a);
    }
    else {
        printf("%d",b+a);
    }

    return 0;
}
