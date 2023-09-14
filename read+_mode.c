#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    fp = fopen("abc.txt","r+");
    if(fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
   fputs("Hi",fp);
    fclose(fp);
    return 0;
}