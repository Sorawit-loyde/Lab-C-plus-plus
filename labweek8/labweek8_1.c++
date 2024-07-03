//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นจำนวนเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 1)

#include <stdio.h>

int main()
{
    int a;
    printf("Enter number : ");
    scanf("%d", &a);
    for (int i=0;i<a;i++)
        {
            printf("*");            
        }
    return 0;
}
