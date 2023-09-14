#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    fp = fopen("abc.txt","r");
    if(fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
  fseek(fp,6,SEEK_SET);
  ch = fgetc(fp);
  printf("\n%c",ch);
  fseek(fp,-2,SEEK_CUR);
  printf("\n%d",ftell(fp));
  fseek(fp,0,SEEK_END);
  printf("\n%d",ftell(fp));
  fclose(fp);
  return 0;
}