/*
จงเขียนโปรแกรมรับตัวอักษร 1 ชุด แล้วแสดงผลลัพธ์จากหลังมาหน้า (Level 3)
ตัวอย่าง
Input : abcdef
Output : fedcba
*/
#include <stdio.h>
#include <string.h>


int main()
{
    char text[20];
    int i;
    int stringlen;

    printf("enter your word :");
    scanf("%s", &text);
    stringlen = strlen(text);
    for (i = stringlen; i >= 0; i--)
    {
        printf("%c",text[i]);
    }
    return 0;
}
