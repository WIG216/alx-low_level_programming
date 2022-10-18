#include "stdio.h";
#include "math.h";

int _abs(num){
    int result = sqrt(num*num);

    return result;
}

int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);

    return (0);
}