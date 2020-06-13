#include <stdio.h>
void main()
{
	int c, f,i=0,blank = 0, others = 0, num[10] = {0};
	printf("input:\n");
	while ((c=getchar()!=EOF))
	{
		
		if (c == ' ')
			++blank;
		else if (c >='0' && c<='9')
			++i;
		else 
			++others;
		//fflush(stdin);
	}
	printf("numbers have %d blank have %d others have%d\n",i,blank,others );
}