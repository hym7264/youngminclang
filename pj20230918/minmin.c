#include <stdio.h>
#include <limits.h>
int main()
{
    char num1 =CHAR_MAX+1;
    short num2 =SHRT_MAX+1;
    int num3 =INT_MAX+1;
    long num4 =LONG_MAX+1;
    long long num5 =LLONG_MAX+1;
    printf("%d %d %d %ld %lld \n",num1,num2,num3,num4,num5);
    return 0;
}