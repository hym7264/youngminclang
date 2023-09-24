#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    float num1;
    char c1;
    printf("문자를 입력하시오");
    scanf("%c",&c1);
    printf("실수를 입력하시오");
    scanf("%f",&num1);
    
    

    printf("%f %c\n",num1,c1);
    printf("%d\n",c1);
    return 0;
}
