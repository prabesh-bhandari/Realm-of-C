//WAP TO INPUT 3 FLOATING NUMBERS AND DISPLAY THOSE NUMBERS AND THEIR PRODUCT//
#include <stdio.h>

void main()

{
    float a,b,c,mul;
    printf("Enter 3 Numbers");
    scanf("%f%f%f",&a,&b,&c);

    //DISPLAY//
    a = ("%f",a);
    b = ("%f",b);
    c = ("%f",c);

    mul = a*b*c;
    printf("Product = %f",mul);
    getch();
}
