// using fgetc() function
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("Mahudoom.txt","r");
    if(fp == NULL)
    {
        printf("\n File could not be open.");
    }else{
        while(!feof(fp))
        {
            ch = getc(fp);
            printf("%c",ch);
        }
    }
}
