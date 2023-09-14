#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("abc.txt","w");
    if(fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    fputs("Tejaswini",fp);
    fclose(fp);
    return 0;
}