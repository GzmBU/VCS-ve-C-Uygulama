#include<stdio.h>
#include <locale.h>
#include <string.h>
#define MAX_SIZE 100 
int main()
{
    setlocale(LC_ALL, "Turkish");
    int i, j, lenght;
    char string[MAX_SIZE];
    char reverse[MAX_SIZE];
    printf("Metni Gir: ");
    gets(string);
    lenght = strlen(string);
    j = 0;
    for (i = lenght - 1; i >= 0; i--)
    {
        reverse[j] = string[i];
        j++;
    }
    reverse[j] = '\0';
    printf("Ters : %s", reverse);

    return  0;

}  
