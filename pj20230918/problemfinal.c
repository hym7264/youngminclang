#include <stdio.h>
int main(){
    int num1;
    int num2;
    int num3;
    int num4;
    printf("Enter the value of a:");
    scanf("%d",&num1);
    printf("Enter the value of b:");
    scanf("%d",&num2);
    num1++;
    --num2;
    num3=num1+num2;
    ++num1;
    num4=num1-num2;
    printf("Value of a:%d\n",num1);
   
    printf("Value of a:%d\n",num2);
    printf("Sum of a and b:%D\n",num3);
    
    printf("Difference between a and b(after modifying a):%d\n",num4);
    return 0;
    
}