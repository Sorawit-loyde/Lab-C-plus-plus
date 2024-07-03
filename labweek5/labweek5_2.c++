/*
จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด กับจำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
*/

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter your number :");
    scanf("%d",&a);
    printf("enter your number :");
    scanf("%d",&b);
    printf("enter your number :");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("%d",c+b);
    }
    else if(b>a && b>c){
        printf("%d",a+c);
    }
    else if(c>a && c>b){
        printf("%d",a+b);
    }
    else{
        return 0;
    }
    
    return 0;
}
