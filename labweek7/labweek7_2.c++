
/*
จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นกรอบสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 2)
*/
#include <stdio.h>
int main()
{
    int num1;
    printf("Enter number : ");
    scanf("%d", &num1);
    for (int i = 1; i <=num1; i++)
    {
        for (int j = 1;j<=num1;j++)
        {
            if (i==1)
            {
                printf("*");
            }
            else if (i==num1)
            {
                printf("*");
            }
            else if (j==1)
            {
                printf("*");
            }
            else if (j==num1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
