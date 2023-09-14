#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    fp = fopen("abc.txt","w+");
    if(fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
   fputs("Tejaswini",fp);
   rewind(fp);
   while(!feof(fp))
   {
    ch = fgetc(fp);
    printf("%c",ch);
   }
  fclose(fp);
    return 0;
}