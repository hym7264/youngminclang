#include <stdio.h>
#include <float.h>
int main(){
    float num1 =  FLT_MIN;
    float num4 = FLT_MAX;
    double num2 = DBL_MAX;
    long double num3=LDBL_MAX;
   
    printf("%.2f\n",num1);
    printf("%e\n",num2);
    printf("%Le\n",num3);
    num1=num1/100000000.0f;
    num4=num4*1000.0f;
    printf("%e %e\n",num1,num4);
    return 0;

}