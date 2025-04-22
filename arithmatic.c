#include <stdio.h>
int main(){
   int x , y;
   float add, sub, mul, div, mod;
   printf("Enter first number: ");
   scanf("%d", &x);
   printf("Enter second number: ");
   scanf("%d", &y);

   add = x + y ;
   sub = x- y ;
   mul = x * y ;
   div = x / y ;
   mod = x % y ;
   printf("Addition of two number is %f\n", add);
   printf("substraction of two number is %f\n", sub);
   printf("multiplication of two number is %f\n", mul);
   printf("Divition of two number is %f\n", div);
   printf("module of two number is %f\n", mod);

    return 0;
}