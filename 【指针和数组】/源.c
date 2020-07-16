#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <io.h>
#include <direct.h>

#if 0
int main()
{
	int a;
	int* p = &a;

	printf("输入一个整数:\n");
	scanf("%d", &a);
	printf("a=%d\n", a);

	printf("输入一个整数:\n");
	scanf("%d", p);
	printf("a=%d\n", *p);
	return 0;
}
#endif
#if 0
int main()
{
	char  str[128];
	printf("请输入什么呢：\n");
	scanf("%s", str);
	printf("您输入在这：%s\n", str);
	printf("%s", &str[0]);


	return 0;
}
#endif
#if 0
int main()
{
	char  a[6] = { 'a','b','c','d','e','f' };
	int b[] = { 1,3,5,7,9 };
	float c[5] = { 1.1,2.2,3.3,4.4,5.5 };
	double d[5] = { 2,2,2,2,2 };
	printf("a[0]->%p,a[1]->%p,a[2]->%p\n", &a[0], &a[1], &a[2]);
	//a[5] = '\0';
	printf("%c\n,", a[0]);
	printf("b[0]->%p,b[1]->%p,b[2]->%p\n", &b[0], &b[1], &b[2]);
	printf("c[0]->%p,c[1]->%p,c[2]->%p\n", &c[0], &c[1], &c[2]);
	printf("d[0]->%p,d[1]->%p,d[2]->%p\n", &d[0], &d[1], &d[2]);


	return 0;

}
#endif
#if 0
int main()
{

	char  a[6] = { 'a','b','c','d','e','f' };
	int b[] = { 1,3,5,7,9 };
	float c[5] = { 1.1,2.2,3.3,4.4,5.5 };
	double d[5] = { 2,2,2,2,2 };

	char* p = a;

}
#endif
#if 0
int main()
{
	char* str = "I love FishC.com!";
	int i, length;
	length = strlen(str);
	for ( i = 0; i < length; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}
#endif


//#include <stdio.h>

//#include <string.h>

#define MAX        256
#if 0
long total;

int countLines(const char* filename);
void findAllCodes(const char* path);
void findALLFiles(const char* path);

int countLines(const char* filename)
{
    FILE* fp;
    int count = 0;
    int temp;

    if ((fp = fopen(filename, "r")) == NULL)
    {
        fprintf(stderr, "Can not open the file：%s\n", filename);
        return 0;
    }

    while ((temp = fgetc(fp)) != EOF)
    {
        if (temp == '\n')
        {
            count++;
        }
    }

    fclose(fp);

    return count;
}

void findAllCodes(const char* path)
{
    struct _finddata_t fa;
    long handle;
    char thePath[MAX], target[MAX];

    strcpy(thePath, path);
    if ((handle = _findfirst(strcat(thePath, "/*.c"), &fa)) != -1L)
    {
        do
        {
            sprintf(target, "%s/%s", path, fa.name);
            total += countLines(target);
        } while (_findnext(handle, &fa) == 0);
    }

    _findclose(handle);
}

void findALLDirs(const char* path)
{
    struct _finddata_t fa;
    long handle;
    char thePath[MAX];

    strcpy(thePath, path);
    if ((handle = _findfirst(strcat(thePath, "/*"), &fa)) == -1L)
    {
        fprintf(stderr, "The path %s is wrong!\n", path);
        return;
    }

    do
    {
        if (!strcmp(fa.name, ".") || !strcmp(fa.name, ".."))
            continue;

        if (fa.attrib == _A_SUBDIR)
        {
            sprintf(thePath, "%s/%s", path, fa.name);
            findAllCodes(thePath);
            findALLDirs(thePath);
        }
    } while (_findnext(handle, &fa) == 0);

    _findclose(handle);
}

int main()
{
    char path[MAX] = ".";

    printf("计算中...\n");

    findAllCodes(path);
    findALLDirs(path);

    printf("目前你总共写了 %ld 行代码！\n\n", total);
    system("pause");

    return 0;
}
#endif

#include <stdio.h>

#if 0
int main()  //""即为一行
{
    int i=0, k = 0;
    printf("\n""         @\n"
        "        / \\\n"
        "        * *\n"
        "        * *\n"
        "        * *\n"
        "        * *\n"
        "    * * * * * *\n"
        "  * * * * * * * *\n"
        "* * * * * * * * * *\n"
        "        * *\n"
        "        * *\n"
        "      * * * *\n"
        "    * * * * * *\n");

    printf("%d", i);

    return 0;

}
#endif

int main()
{
    char str[] = "I love FishC.com!";
    char* target = str;
    int count = 0;
    while (*target++!='\0')
    {
        count++;
    }
    printf("总共有%d个字符!\n", count);
}