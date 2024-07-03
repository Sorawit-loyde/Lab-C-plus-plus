/*
จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสามเหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 2)
*/
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter an integer -> ");
    scanf("%d", &n);
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= j; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
