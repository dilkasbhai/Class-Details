#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("Simple.tex","r"); //--> Read the file
   // ptr=fopen("Simple.tex","W"); // --> Write the file

    return 0;
}