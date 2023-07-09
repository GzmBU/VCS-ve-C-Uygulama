#include <stdio.h>
int main()
{
    int n, reversedInteger = 0, remainder, originalInteger;

    printf("Bir tamsayı girin: ");
    scanf_s("%d", &n);

    originalInteger = n;

    while (n != 0)
    {
        remainder = n % 10;
        reversedInteger = reversedInteger * 10 + remainder;
        n /= 10;
    }

    // orignalInteger ve reversedInteger eşitse Palindrom'dur
    if (originalInteger == reversedInteger)
        printf("%d Palindrom'dur.", originalInteger);
    else
        printf("%d Palindrom değildir.", originalInteger);

    return 0;
}
