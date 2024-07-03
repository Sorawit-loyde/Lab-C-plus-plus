/*

จงเขียนโปรแกรมเพื่อหาค่า Body Mass Index จากค่าความสูงและน้ำหนัก ซึ่งมีสูตรการคำนวณดังนี้
BMI = Weight / Height2
เมื่อ Weight มีหน่วยเป็นกิโลกรัม และ Height มีหน่วยเป็นเมตร (เกณฑ์การแบ่งน้ำหนักโดยใช้ BMI , ต่ำกว่า 18.5 น้ำหนักต่ำกว่าเกณฑ์ , 18.5 - 24.9 ปกติ , 25.0 - 29.9 สูงกว่ามาตรฐาน , ตั้งแต่ 30.0 ขึ้นไป อ้วนเกินไป ) (Level 1)

*/
#include <stdio.h>

int main()
{
    float h, w, bmi;
    printf("enter your height (meter) :");
    scanf("%f", &h);
    printf("enter your weight (kilogram):");
    scanf("%f", &w);

    bmi = w / (h * h);

    printf("Your BMI is %f \n", bmi);

    if (bmi < 18.5)
    {
        printf("Underweight ");
    }
    else if (bmi >= 18.5 || bmi < 25)
    {
        printf("Normal weight");
    }
    else if (bmi >= 25 || bmi < 30)
    {
        printf("Overweight");
    }
    else
    {
        printf("Obesity ");
    }
    return 0;
}
