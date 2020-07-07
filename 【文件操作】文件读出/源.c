#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE* fp;
    char ch, filename[20];
    printf("Please input the fileanme you wan to read:");
    scanf_s("%s", filename,20);
    if ((fopen_s(&fp, filename, "r")))
    {
        printf("Cannot open the file!\n");
        exit(0);
    }
    ch = fgetc(fp); //fp指向第一个字节
    while(ch!=EOF)
    {
        
        putchar(ch);
        ch = fgetc(fp);  //fp循环后移1个字节
    }
    fclose(fp);
}