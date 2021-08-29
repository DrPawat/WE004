#include<stdio.h>
int main() {
    float avg, sum=0, num;
    int a = 1;
    printf("Enter student height:\n");

   while (a<=10)
    {
        scanf_s("%f", &num);
        printf("student %d height = %.2f\n", a, num);
        sum = sum + num;
        a++;
    }
    avg = sum / 10;
    printf("Average of student height  = %.2f\n", avg);

}