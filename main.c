#include <stdio.h>
#include <conio.h>

void main() {
    int a,b;
    printf("Enter two numbers to swap \n");
    scanf("%d %d",&a,&b);
    printf("Before swap a=%d, b=%d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap a=%d, b=%d \n",a,b);
    getch();
}