#include<stdio.h>
int main() {
    float avg, sum=0, num;
    int a = 1;
    printf("Enter student height:\n");

   while (a<=10)
    {
        printf("student %d height = ", a);
        scanf_s("%f", &num);
        sum = sum + num;
        a++;
    }
    avg = sum / 10;
    printf("Average of student height  = %.2f\n", avg);

}