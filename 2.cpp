#include <stdio.h>
int main()
{
    FILE *ptr;
    int num, num1;
    ptr = fopen("harry.txt", "r");

    fscanf(ptr, "%d", &num);
    printf("Your number:%d\n", num);

    fscanf(ptr, "%d", &num1);
    printf("Your number:%d", num1);
    fclose(ptr);
    return 0;
}